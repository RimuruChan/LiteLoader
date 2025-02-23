#include "liteloader/api/LoggerAPI.h"
#include "liteloader/api/utils/Base64.h"
#include "liteloader/api/utils/StringUtils.h"
#include "mc/common/ColorFormat.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/nbt/CompoundTag.h"
#include "nlohmann/json.hpp"

using namespace ll::StringUtils;

namespace cf = ColorFormat;

static constexpr auto base64Id = std::string{" /*BASE64*/"};

template <typename T>
std::string getString(T&& value) {
    return std::format("{}", value);
}

std::string WrapColorCode(std::string const& str, std::string const& code) { return code + str + cf::RESET; }

std::string toDumpString(std::string const& str, fmt::color defaultc, std::string const& defaultmc, SnbtFormat format) {

    std::string res;

    bool base64 = false;

    try {
        res = nlohmann::json{str}.dump(
            -1,
            ' ',
            (bool)((int)format & (int)SnbtFormat::ForceAscii),
            nlohmann::json::error_handler_t::strict
        );
        res = res.substr(1, res.size() - 2);
    } catch (...) {
        base64 = true;
        res    = "\"" + ll::base64::Encode(str) + "\"";
    }

    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            res = applyTextStyle(fmt::fg(defaultc), res);
            if (base64) { res += applyTextStyle(fmt::fg(fmt::color::olive_drab), base64Id); }
        } else {
            res = WrapColorCode(res, defaultmc);
            if (base64) { res += WrapColorCode(base64Id, cf::MATERIAL_EMERALD); }
        }
    } else {
        if (base64) { res += base64Id; }
    }
    return res;
}

std::string toDumpNumber(std::string str, SnbtFormat format) {
    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            str = applyTextStyle(fmt::fg(fmt::color::pale_green), str);
        } else {
            str = WrapColorCode(str, cf::GREEN);
        }
    }
    return str;
}

std::string TypedToSnbt(EndTag&, uchar, SnbtFormat format) {
    std::string res = "null";

    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            res = applyTextStyle(fmt::fg(fmt::color::dodger_blue), res);
        } else {
            res = WrapColorCode(res, cf::BLUE);
        }
    }
    return res;
}
std::string TypedToSnbt(ByteTag& self, uchar, SnbtFormat format) {
    return toDumpNumber(getString(self.data) + 'b', format);
}
std::string TypedToSnbt(ShortTag& self, uchar, SnbtFormat format) {
    return toDumpNumber(getString(self.data) + 's', format);
}
std::string TypedToSnbt(IntTag& self, uchar, SnbtFormat format) { return toDumpNumber(getString(self.data), format); }

std::string TypedToSnbt(Int64Tag& self, uchar, SnbtFormat format) {
    return toDumpNumber(getString(self.data) + 'l', format);
}
std::string TypedToSnbt(FloatTag& self, uchar, SnbtFormat format) {
    return toDumpNumber(getString(self.data) + 'f', format);
}
std::string TypedToSnbt(DoubleTag& self, uchar, SnbtFormat format) {
    return toDumpNumber(getString(self.data), format);
}
std::string TypedToSnbt(StringTag& self, uchar, SnbtFormat format) {
    std::string res = toDumpString(self.data, fmt::color::sandy_brown, cf::GOLD, format);
    return res;
}
std::string TypedToSnbt(ListTag& self, uchar indent, SnbtFormat format) {

    auto bracketColor = fmt::fg(fmt::color::deep_sky_blue);

    std::string res;

    std::string lbracket{"["}, rbracket{"]"};


    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            lbracket = applyTextStyle(bracketColor, lbracket);
            rbracket = applyTextStyle(bracketColor, rbracket);
        } else {
            lbracket = WrapColorCode(lbracket, cf::MATERIAL_DIAMOND);
            rbracket = WrapColorCode(rbracket, cf::MATERIAL_DIAMOND);
        }
    }

    res += lbracket;

    size_t      i = self.mList.size();
    std::string indentSpace(indent, ' ');

    bool isMinimized = format == SnbtFormat::Minimize;
    bool isNewLine   = (int)format & (int)SnbtFormat::ListNewLine;

    if (isNewLine) { res += '\n'; }

    for (auto& tag : self.mList) {
        i--;
        if (isNewLine) { res += indentSpace; }

        auto key = tag->toSnbt(format, indent);

        if (isNewLine) {
            res += replaceAll(key, "\n", "\n" + indentSpace);
        } else {
            res += key;
        }

        if (i > 0) {
            res += ',';
            if (!isMinimized && !isNewLine) { res += ' '; }
        }
        if (isNewLine) { res += '\n'; }
    }

    res += rbracket;

    return res;
}
std::string TypedToSnbt(CompoundTag& self, uchar indent, SnbtFormat format) {
    auto bracketColor = fmt::fg(fmt::color::orchid);

    std::string res;

    std::string lbracket{"{"}, rbracket{"}"};


    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            lbracket = applyTextStyle(bracketColor, lbracket);
            rbracket = applyTextStyle(bracketColor, rbracket);
        } else {
            lbracket = WrapColorCode(lbracket, cf::LIGHT_PURPLE);
            rbracket = WrapColorCode(rbracket, cf::LIGHT_PURPLE);
        }
    }

    res += lbracket;

    size_t      i = self.mTags.size();
    std::string indentSpace(indent, ' ');

    bool isMinimized = format == SnbtFormat::Minimize;
    bool isNewLine   = (int)format & (int)SnbtFormat::CompoundNewLine;

    if (isNewLine) { res += '\n'; }

    for (auto& [k, v] : self.mTags) {
        i--;
        if (isNewLine) { res += indentSpace; }

        auto keyStr = toDumpString(k, fmt::color::sky_blue, cf::AQUA, format);

        res += keyStr;

        res += ':';

        if (!isMinimized) { res += ' '; }

        auto key = v.get()->toSnbt(format, indent);

        if (isNewLine) {
            res += replaceAll(key, "\n", "\n" + indentSpace);
        } else {
            res += key;
        }

        if (i > 0) {
            res += ',';
            if (!isMinimized && !isNewLine) { res += ' '; }
        }
        if (isNewLine) { res += '\n'; }
    }

    res += rbracket;

    return res;
}
std::string TypedToSnbt(ByteArrayTag& self, uchar indent, SnbtFormat format) {

    auto bracketColor = fmt::fg(fmt::color::yellow);

    std::string res;

    std::string lbracket{"[B;"}, rbracket{"]"};


    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            lbracket = applyTextStyle(bracketColor, lbracket);
            rbracket = applyTextStyle(bracketColor, rbracket);
        } else {
            lbracket = WrapColorCode(lbracket, cf::YELLOW);
            rbracket = WrapColorCode(rbracket, cf::YELLOW);
        }
    }

    res += lbracket;

    size_t      i = self.view().size();
    std::string indentSpace(indent, ' ');

    bool isMinimized = format == SnbtFormat::Minimize;
    bool isNewLine   = (int)format & (int)SnbtFormat::ListNewLine;

    if (isNewLine) { res += '\n'; }

    for (auto& tag : self.view()) {
        i--;
        if (isNewLine) { res += indentSpace; }

        res += toDumpNumber(getString(tag) + 'b', format);

        if (i > 0) {
            res += ',';
            if (!isMinimized && !isNewLine) { res += ' '; }
        }
        if (isNewLine) { res += '\n'; }
    }

    res += rbracket;

    return res;
}
std::string TypedToSnbt(IntArrayTag& self, uchar indent, SnbtFormat format) {

    auto bracketColor = fmt::fg(fmt::color::yellow);

    std::string res;

    std::string lbracket{"[I;"}, rbracket{"]"};


    if ((int)format & (int)SnbtFormat::Colored) {
        if ((int)format & (int)SnbtFormat::Console) {
            lbracket = applyTextStyle(bracketColor, lbracket);
            rbracket = applyTextStyle(bracketColor, rbracket);
        } else {
            lbracket = WrapColorCode(lbracket, cf::YELLOW);
            rbracket = WrapColorCode(rbracket, cf::YELLOW);
        }
    }

    res += lbracket;

    size_t      i = self.view().size();
    std::string indentSpace(indent, ' ');

    bool isMinimized = format == SnbtFormat::Minimize;
    bool isNewLine   = (int)format & (int)SnbtFormat::ListNewLine;

    if (isNewLine) { res += '\n'; }

    for (auto& tag : self.view()) {
        i--;
        if (isNewLine) { res += indentSpace; }

        res += toDumpNumber(getString(tag), format);

        if (i > 0) {
            res += ',';
            if (!isMinimized && !isNewLine) { res += ' '; }
        }
        if (isNewLine) { res += '\n'; }
    }

    res += rbracket;

    return res;
}