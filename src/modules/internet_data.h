#pragma once

#include <array>
#include <string_view>

namespace faker::internet
{
const auto domainSuffixes = std::to_array<std::string_view>({
    "biz",
    "com",
    "info",
    "name",
    "net",
    "org",
});

const auto emailHosts = std::to_array<std::string_view>({
    "gmail.com",
    "hotmail.com",
    "outlook.com",
    "yahoo.com",
});

const auto emailExampleHosts = std::to_array<std::string_view>({
    "example.com",
    "example.net",
    "example.org",
});

const auto smileyEmojis = std::to_array<std::string_view>({
    "☠️",
    "☹️",
    "☺️",
    "❣️",
    "❤️",
    "❤️‍🔥",
    "❤️‍🩹",
    "👁️‍🗨️",
    "👹",
    "👺",
    "👻",
    "👽",
    "👾",
    "👿",
    "💀",
    "💋",
    "💌",
    "💓",
    "💔",
    "💕",
    "💖",
    "💗",
    "💘",
    "💙",
    "💚",
    "💛",
    "💜",
    "💝",
    "💞",
    "💟",
    "💢",
    "💣",
    "💤",
    "💥",
    "💦",
    "💨",
    "💩",
    "💫",
    "💬",
    "💭",
    "💯",
    "🕳️",
    "🖤",
    "🗨️",
    "🗯️",
    "😀",
    "😁",
    "😂",
    "😃",
    "😄",
    "😅",
    "😆",
    "😇",
    "😈",
    "😉",
    "😊",
    "😋",
    "😌",
    "😍",
    "😎",
    "😏",
    "😐",
    "😑",
    "😒",
    "😓",
    "😔",
    "😕",
    "😖",
    "😗",
    "😘",
    "😙",
    "😚",
    "😛",
    "😜",
    "😝",
    "😞",
    "😟",
    "😠",
    "😡",
    "😢",
    "😣",
    "😤",
    "😥",
    "😦",
    "😧",
    "😨",
    "😩",
    "😪",
    "😫",
    "😬",
    "😭",
    "😮",
    "😮‍💨",
    "😯",
    "😰",
    "😱",
    "😲",
    "😳",
    "😴",
    "😵",
    "😵‍💫",
    "😶",
    "😶‍🌫️",
    "😷",
    "😸",
    "😹",
    "😺",
    "😻",
    "😼",
    "😽",
    "😾",
    "😿",
    "🙀",
    "🙁",
    "🙂",
    "🙃",
    "🙄",
    "🙈",
    "🙉",
    "🙊",
    "🤍",
    "🤎",
    "🤐",
    "🤑",
    "🤒",
    "🤓",
    "🤔",
    "🤕",
    "🤖",
    "🤗",
    "🤠",
    "🤡",
    "🤢",
    "🤣",
    "🤤",
    "🤥",
    "🤧",
    "🤨",
    "🤩",
    "🤪",
    "🤫",
    "🤬",
    "🤭",
    "🤮",
    "🤯",
    "🥰",
    "🥱",
    "🥲",
    "🥳",
    "🥴",
    "🥵",
    "🥶",
    "🥸",
    "🥺",
    "🧐",
    "🧡",
});

const auto bodyEmojis = std::to_array<std::string_view>({
    "☝️",    "☝🏻",  "☝🏼",  "☝🏽",  "☝🏾",  "☝🏿",  "✊",   "✊🏻", "✊🏼", "✊🏽", "✊🏾", "✊🏿", "✋",   "✋🏻",
    "✋🏼", "✋🏽", "✋🏾", "✋🏿", "✌️",    "✌🏻",  "✌🏼",  "✌🏽",  "✌🏾",  "✌🏿",  "✍️",    "✍🏻",  "✍🏼",  "✍🏽",
    "✍🏾",  "✍🏿",  "👀",   "👁️",   "👂",   "👂🏻", "👂🏼", "👂🏽", "👂🏾", "👂🏿", "👃",   "👃🏻", "👃🏼", "👃🏽",
    "👃🏾", "👃🏿", "👄",   "👅",   "👆",   "👆🏻", "👆🏼", "👆🏽", "👆🏾", "👆🏿", "👇",   "👇🏻", "👇🏼", "👇🏽",
    "👇🏾", "👇🏿", "👈",   "👈🏻", "👈🏼", "👈🏽", "👈🏾", "👈🏿", "👉",   "👉🏻", "👉🏼", "👉🏽", "👉🏾", "👉🏿",
    "👊",   "👊🏻", "👊🏼", "👊🏽", "👊🏾", "👊🏿", "👋",   "👋🏻", "👋🏼", "👋🏽", "👋🏾", "👋🏿", "👌",   "👌🏻",
    "👌🏼", "👌🏽", "👌🏾", "👌🏿", "👍",   "👍🏻", "👍🏼", "👍🏽", "👍🏾", "👍🏿", "👎",   "👎🏻", "👎🏼", "👎🏽",
    "👎🏾", "👎🏿", "👏",   "👏🏻", "👏🏼", "👏🏽", "👏🏾", "👏🏿", "👐",   "👐🏻", "👐🏼", "👐🏽", "👐🏾", "👐🏿",
    "💅",   "💅🏻", "💅🏼", "💅🏽", "💅🏾", "💅🏿", "💪",   "💪🏻", "💪🏼", "💪🏽", "💪🏾", "💪🏿", "🖐️",   "🖐🏻",
    "🖐🏼", "🖐🏽", "🖐🏾", "🖐🏿", "🖕",   "🖕🏻", "🖕🏼", "🖕🏽", "🖕🏾", "🖕🏿", "🖖",   "🖖🏻", "🖖🏼", "🖖🏽",
    "🖖🏾", "🖖🏿", "🙌",   "🙌🏻", "🙌🏼", "🙌🏽", "🙌🏾", "🙌🏿", "🙏",   "🙏🏻", "🙏🏼", "🙏🏽", "🙏🏾", "🙏🏿",
    "🤌",   "🤌🏻", "🤌🏼", "🤌🏽", "🤌🏾", "🤌🏿", "🤏",   "🤏🏻", "🤏🏼", "🤏🏽", "🤏🏾", "🤏🏿", "🤘",   "🤘🏻",
    "🤘🏼", "🤘🏽", "🤘🏾", "🤘🏿", "🤙",   "🤙🏻", "🤙🏼", "🤙🏽", "🤙🏾", "🤙🏿", "🤚",   "🤚🏻", "🤚🏼", "🤚🏽",
    "🤚🏾", "🤚🏿", "🤛",   "🤛🏻", "🤛🏼", "🤛🏽", "🤛🏾", "🤛🏿", "🤜",   "🤜🏻", "🤜🏼", "🤜🏽", "🤜🏾", "🤜🏿",
    "🤝",   "🤞",   "🤞🏻", "🤞🏼", "🤞🏽", "🤞🏾", "🤞🏿", "🤟",   "🤟🏻", "🤟🏼", "🤟🏽", "🤟🏾", "🤟🏿", "🤲",
    "🤲🏻", "🤲🏼", "🤲🏽", "🤲🏾", "🤲🏿", "🤳",   "🤳🏻", "🤳🏼", "🤳🏽", "🤳🏾", "🤳🏿", "🦴",   "🦵",   "🦵🏻",
    "🦵🏼", "🦵🏽", "🦵🏾", "🦵🏿", "🦶",   "🦶🏻", "🦶🏼", "🦶🏽", "🦶🏾", "🦶🏿", "🦷",   "🦻",   "🦻🏻", "🦻🏼",
    "🦻🏽", "🦻🏾", "🦻🏿", "🦾",   "🦿",   "🧠",   "🫀",   "🫁",
});

const auto personEmojis = std::to_array<std::string_view>({
    "⛷️",
    "⛹️",
    "⛹️‍♀️",
    "⛹️‍♂️",
    "👧",
    "👨",
    "👨‍⚕️",
    "👨‍⚖️",
    "👨‍✈️",
    "👨‍❤️‍👨",
    "👨‍❤️‍💋‍👨",
    "👨‍🌾",
    "👨‍🍳",
    "👨‍🍼",
    "👨‍🦯",
    "👨‍🦰",
    "👨‍🦱",
    "👨‍🦲",
    "👨‍🦳",
    "👨‍🦼",
    "👨‍🦽",
    "👮‍♀️",
    "👰‍♀️",
    "👰‍♂️",
    "👰🏻",
    "👱‍♀️",
    "👱‍♂️",
    "👳‍♀️",
    "💆‍♀️",
    "💆‍♂️",
    "🙇",
    "🙇‍♀️",
    "🙇‍♂️",
    "🙋",
    "🙋‍♀️",
    "🙋‍♂️",
    "🙎",
    "🙎‍♀️",
    "🚣",
    "🚣‍♀️",
    "🚣‍♂️",
    "🚴‍♀️",
    "🚴‍♂️",
    "🚵",
    "🚵‍♀️",
    "🚵‍♂️",
    "🚶",
    "🚶‍♀️",
    "🚶‍♂️",
    "🤦",
    "🤦‍♀️",
    "🤦‍♂️",
    "🤰",
    "🤱",
    "🤴",
    "🤵",
    "🤵‍♀️",
    "🤵‍♂️",
    "🤷",
    "🤷‍♀️",
    "🤷‍♂️",
    "🤸",
    "🤸‍♀️",
    "🤹",
    "🤺",
    "🤼",
    "🤼‍♀️",
    "🤼‍♂️",
    "🤽",
    "🤾",
    "🤾‍♀️",
    "🦸‍♀️",
    "🧍",
    "🧎",
    "🧏",
    "🧏‍♀️",
    "🧑",
    "🧑‍⚕️",
    "🧑‍⚖️",
    "🧑‍✈️",
    "🧑‍🌾",
    "🧑‍🍳",
    "🧑‍🍼",
    "🧑‍💼",
    "🧑‍🔧",
    "🧑‍🔬",
    "🧑‍🚀",
    "🧑‍🚒",
    "🧑‍🤝‍🧑",
    "🧑‍🦯",
    "🧑‍🦰",
    "🧑‍🦱",
    "🧑‍🦲",
    "🧑‍🦳",
    "🧑‍🦼",
    "🧖",
    "🧖‍♀️",
    "🧖‍♂️",
    "🧗‍♀️",
    "🧗‍♂️",
    "🧘",
    "🧘‍♀️",
    "🧙",
    "🧙‍♀️",
    "🧙‍♂️",
    "🧚",
    "🧚‍♀️",
    "🧚‍♂️",
    "🧛",
    "🧛‍♀️",
    "🧛‍♂️",
    "🧜",
    "🧜‍♀️",
    "🧜‍♂️",
    "🧝‍♀️",
    "🧝‍♂️",
    "🧞",
    "🧞‍♀️",
    "🧞‍♂️",
    "🧟",
    "🧟‍♀️",
    "🧟‍♂️",
});

const auto natureEmojis = std::to_array<std::string_view>({
    "☘️",           "🌱",
    "🌲",          "🌳",
    "🌴",          "🌵",
    "🌷",          "🌸",
    "🌹",          "🌺",
    "🌻",          "🌼",
    "🌾",          "🌿",
    "🍀",          "🍁",
    "🍂",          "🍃",
    "🏵️",          "🐀",
    "🐁",          "🐂",
    "🐃",          "🐄",
    "🐅",          "🐆",
    "🐇",          "🐈",
    "🐈‍⬛",  "🐉",
    "🐊",          "🐋",
    "🐌",          "🐍",
    "🐎",          "🐏",
    "🐐",          "🐑",
    "🐒",          "🐓",
    "🐔",          "🐕",
    "🐕‍🦺", "🐖",
    "🐗",          "🐘",
    "🐙",          "🐚",
    "🐛",          "🐜",
    "🐝",          "🐞",
    "🐟",          "🐠",
    "🐡",          "🐢",
    "🐣",          "🐤",
    "🐥",          "🐦",
    "🐧",          "🐨",
    "🐩",          "🐪",
    "🐫",          "🐬",
    "🐭",          "🐮",
    "🐯",          "🐰",
    "🐱",          "🐲",
    "🐳",          "🐴",
    "🐵",          "🐶",
    "🐷",          "🐸",
    "🐹",          "🐺",
    "🐻",          "🐻‍❄️",
    "🐼",          "🐽",
    "🐾",          "🐿️",
    "💐",          "💮",
    "🕊️",          "🕷️",
    "🕸️",          "🥀",
    "🦁",          "🦂",
    "🦃",          "🦄",
    "🦅",          "🦆",
    "🦇",          "🦈",
    "🦉",          "🦊",
    "🦋",          "🦌",
    "🦍",          "🦎",
    "🦏",          "🦒",
    "🦓",          "🦔",
    "🦕",          "🦖",
    "🦗",          "🦘",
    "🦙",          "🦚",
    "🦛",          "🦜",
    "🦝",          "🦟",
    "🦠",          "🦡",
    "🦢",          "🦣",
    "🦤",          "🦥",
    "🦦",          "🦧",
    "🦨",          "🦩",
    "🦫",          "🦬",
    "🦭",          "🦮",
    "🪰",          "🪱",
    "🪲",          "🪳",
    "🪴",          "🪶",
});

const auto foodEmojis = std::to_array<std::string_view>({
    "☕", "🌭", "🌮", "🌯", "🌰", "🌶️", "🌽", "🍄", "🍅", "🍆", "🍇", "🍈", "🍉", "🍊", "🍋", "🍌", "🍍", "🍎", "🍏",
    "🍐", "🍑", "🍒", "🍓", "🍔", "🍕", "🍖", "🍗", "🍘", "🍙", "🍚", "🍛", "🍜", "🍝", "🍞", "🍟", "🍠", "🍡", "🍢",
    "🍣", "🍤", "🍥", "🍦", "🍧", "🍨", "🍩", "🍪", "🍫", "🍬", "🍭", "🍮", "🍯", "🍰", "🍱", "🍲", "🍳", "🍴", "🍵",
    "🍶", "🍷", "🍸", "🍹", "🍺", "🍻", "🍼", "🍽️", "🍾", "🍿", "🎂", "🏺", "🔪", "🥂", "🥃", "🥄", "🥐", "🥑", "🥒",
    "🥓", "🥔", "🥕", "🥖", "🥗", "🥘", "🥙", "🥚", "🥛", "🥜", "🥝", "🥞", "🥟", "🥠", "🥡", "🥢", "🥣", "🥤", "🥥",
    "🥦", "🥧", "🥨", "🥩", "🥪", "🥫", "🥬", "🥭", "🥮", "🥯", "🦀", "🦐", "🦑", "🦞", "🦪", "🧀", "🧁", "🧂", "🧃",
    "🧄", "🧅", "🧆", "🧇", "🧈", "🧉", "🧊", "🧋", "🫐", "🫑", "🫒", "🫓", "🫔", "🫕", "🫖",
});

const auto travelEmojis = std::to_array<std::string_view>({
    "⌚", "⌛", "⏰", "⏱️",  "⏲️",  "⏳", "☀️",  "☁️",  "☂️",  "☃️",  "☄️",  "☔", "♨️",  "⚓", "⚡", "⛄", "⛅", "⛈️",
    "⛩️",  "⛪", "⛰️",  "⛱️",  "⛲", "⛴️",  "⛵", "⛺", "⛽", "✈️",  "❄️",  "⭐", "🌀", "🌁", "🌂", "🌃", "🌄", "🌅",
    "🌆", "🌇", "🌈", "🌉", "🌊", "🌋", "🌌", "🌍", "🌎", "🌏", "🌐", "🌑", "🌒", "🌓", "🌔", "🌕", "🌖", "🌗",
    "🌘", "🌙", "🌚", "🌛", "🌜", "🌝", "🌞", "🌟", "🌠", "🌡️", "🌤️", "🌥️", "🌦️", "🌧️", "🌨️", "🌩️", "🌪️", "🌫️",
    "🌬️", "🎠", "🎡", "🎢", "🎪", "🏍️", "🏎️", "🏔️", "🏕️", "🏖️", "🏗️", "🏘️", "🏙️", "🏚️", "🏛️", "🏜️", "🏝️", "🏞️",
    "🏟️", "🏠", "🏡", "🏢", "🏣", "🏤", "🏥", "🏦", "🏨", "🏩", "🏪", "🏫", "🏬", "🏭", "🏯", "🏰", "💈", "💒",
    "💧", "💺", "🔥", "🕋", "🕌", "🕍", "🕐", "🕑", "🕒", "🕓", "🕔", "🕕", "🕖", "🕗", "🕘", "🕙", "🕚", "🕛",
    "🕜", "🕝", "🕞", "🕟", "🕠", "🕡", "🕢", "🕣", "🕤", "🕥", "🕦", "🕧", "🕰️", "🗺️", "🗻", "🗼", "🗽", "🗾",
    "🚀", "🚁", "🚂", "🚃", "🚄", "🚅", "🚆", "🚇", "🚈", "🚉", "🚊", "🚋", "🚌", "🚍", "🚎", "🚏", "🚐", "🚑",
    "🚒", "🚓", "🚔", "🚕", "🚖", "🚗", "🚘", "🚙", "🚚", "🚛", "🚜", "🚝", "🚞", "🚟", "🚠", "🚡", "🚢", "🚤",
    "🚥", "🚦", "🚧", "🚨", "🚲", "🛎️",  "🛑", "🛕", "🛖", "🛢️",  "🛣️",  "🛤️",  "🛥️",  "🛩️",  "🛫", "🛬", "🛰️",  "🛳️",
    "🛴", "🛵", "🛶", "🛸", "🛹", "🛺", "🛻", "🛼", "🦼", "🦽", "🧭", "🧱", "🧳", "🪂", "🪐", "🪨", "🪵",
});

const auto activityEmojis = std::to_array<std::string_view>({
    "♟️",  "♠️",  "♣️",  "♥️",  "♦️",  "⚽", "⚾", "⛳", "⛸️",  "✨", "🀄", "🃏", "🎀", "🎁", "🎃", "🎄", "🎆",
    "🎇", "🎈", "🎉", "🎊", "🎋", "🎍", "🎎", "🎏", "🎐", "🎑", "🎖️", "🎗️", "🎟️", "🎣", "🎨", "🎫", "🎭",
    "🎮", "🎯", "🎰", "🎱", "🎲", "🎳", "🎴", "🎽", "🎾", "🎿", "🏀", "🏅", "🏆", "🏈", "🏉", "🏏", "🏐",
    "🏑", "🏒", "🏓", "🏸", "🔮", "🕹️", "🖼️", "🛷", "🤿", "🥅", "🥇", "🥈", "🥉", "🥊", "🥋", "🥌", "🥍",
    "🥎", "🥏", "🧧", "🧨", "🧩", "🧵", "🧶", "🧸", "🧿", "🪀", "🪁", "🪄", "🪅", "🪆", "🪡", "🪢",
});

const auto objectEmojis = std::to_array<std::string_view>({
    "⌨️",  "☎️",  "⚒️",  "⚔️",  "⚖️",  "⚗️",  "⚙️",  "⚰️",  "⚱️",  "⛏️",  "⛑️",  "⛓️",  "✂️",  "✉️",  "✏️",  "✒️",  "🎒", "🎓",
    "🎙️", "🎚️", "🎛️", "🎞️", "🎤", "🎥", "🎧", "🎩", "🎬", "🎵", "🎶", "🎷", "🎸", "🎹", "🎺", "🎻", "🎼", "🏮",
    "🏷️", "🏹", "👑", "👒", "👓", "👔", "👕", "👖", "👗", "👘", "👙", "👚", "👛", "👜", "👝", "👞", "👟", "👠",
    "👡", "👢", "💄", "💉", "💊", "💍", "💎", "💡", "💰", "💳", "💴", "💵", "💶", "💷", "💸", "💹", "💻", "💼",
    "💽", "💾", "💿", "📀", "📁", "📂", "📃", "📄", "📅", "📆", "📇", "📈", "📉", "📊", "📋", "📌", "📍", "📎",
    "📏", "📐", "📑", "📒", "📓", "📔", "📕", "📖", "📗", "📘", "📙", "📚", "📜", "📝", "📞", "📟", "📠", "📡",
    "📢", "📣", "📤", "📥", "📦", "📧", "📨", "📩", "📪", "📫", "📬", "📭", "📮", "📯", "📰", "📱", "📲", "📷",
    "📸", "📹", "📺", "📻", "📼", "📽️", "📿", "🔇", "🔈", "🔉", "🔊", "🔋", "🔌", "🔍", "🔎", "🔏", "🔐", "🔑",
    "🔒", "🔓", "🔔", "🔕", "🔖", "🔗", "🔦", "🔧", "🔨", "🔩", "🔫", "🔬", "🔭", "🕯️", "🕶️", "🖇️", "🖊️", "🖋️",
    "🖌️", "🖍️", "🖥️", "🖨️", "🖱️", "🖲️", "🗂️", "🗃️", "🗄️", "🗑️", "🗒️", "🗓️", "🗜️", "🗝️", "🗞️", "🗡️", "🗳️", "🗿",
    "🚪", "🚬", "🚽", "🚿", "🛁", "🛋️",  "🛍️",  "🛏️",  "🛒", "🛗", "🛠️",  "🛡️",  "🥁", "🥻", "🥼", "🥽", "🥾", "🥿",
    "🦯", "🦺", "🧢", "🧣", "🧤", "🧥", "🧦", "🧪", "🧫", "🧬", "🧮", "🧯", "🧰", "🧲", "🧴", "🧷", "🧹", "🧺",
    "🧻", "🧼", "🧽", "🧾", "🩰", "🩱", "🩲", "🩳", "🩴", "🩸", "🩹", "🩺", "🪃", "🪑", "🪒", "🪓", "🪔", "🪕",
    "🪖", "🪗", "🪘", "🪙", "🪚", "🪛", "🪜", "🪝", "🪞", "🪟", "🪠", "🪣", "🪤", "🪥", "🪦", "🪧",
});

const auto symbolEmojis = std::to_array<std::string_view>({
    "#️⃣",  "*️⃣",  "0️⃣",  "1️⃣",  "2️⃣",  "3️⃣",  "4️⃣",  "5️⃣",  "6️⃣",  "7️⃣",  "8️⃣",  "9️⃣",  "©️",  "®️",  "‼️",  "⁉️",  "™️",  "ℹ️",  "↔️",
    "↕️",  "↖️",  "↗️",  "↘️",  "↙️",  "↩️",  "↪️",  "⏏️",  "⏩", "⏪", "⏫", "⏬", "⏭️",  "⏮️",  "⏯️",  "⏸️",  "⏹️",  "⏺️",  "Ⓜ️",
    "▪️",  "▫️",  "▶️",  "◀️",  "◻️",  "◼️",  "◽", "◾", "☑️",  "☢️",  "☣️",  "☦️",  "☪️",  "☮️",  "☯️",  "☸️",  "♀️",  "♂️",  "♈",
    "♉", "♊", "♋", "♌", "♍", "♎", "♏", "♐", "♑", "♒", "♓", "♻️",  "♾️",  "♿", "⚕️",  "⚛️",  "⚜️",  "⚠️",  "⚧️",
    "⚪", "⚫", "⛎", "⛔", "✅", "✔️",  "✖️",  "✝️",  "✡️",  "✳️",  "✴️",  "❇️",  "❌", "❎", "❓", "❔", "❕", "❗", "➕",
    "➖", "➗", "➡️",  "➰", "➿", "⤴️",  "⤵️",  "⬅️",  "⬆️",  "⬇️",  "⬛", "⬜", "⭕", "〰️", "〽️", "㊗️", "㊙️", "🅰️",  "🅱️",
    "🅾️",  "🅿️",  "🆎", "🆑", "🆒", "🆓", "🆔", "🆕", "🆖", "🆗", "🆘", "🆙", "🆚", "🈁", "🈂️", "🈚", "🈯", "🈲", "🈳",
    "🈴", "🈵", "🈶", "🈷️", "🈸", "🈹", "🈺", "🉐", "🉑", "🎦", "🏧", "💠", "💱", "💲", "📛", "📳", "📴", "📵", "📶",
    "🔀", "🔁", "🔂", "🔃", "🔄", "🔅", "🔆", "🔘", "🔙", "🔚", "🔛", "🔜", "🔝", "🔞", "🔟", "🔠", "🔡", "🔢", "🔣",
    "🔤", "🔯", "🔰", "🔱", "🔲", "🔳", "🔴", "🔵", "🔶", "🔷", "🔸", "🔹", "🔺", "🔻", "🔼", "🔽", "🕉️", "🕎", "🚫",
    "🚭", "🚮", "🚯", "🚰", "🚱", "🚳", "🚷", "🚸", "🚹", "🚺", "🚻", "🚼", "🚾", "🛂", "🛃", "🛄", "🛅", "🛐", "🟠",
    "🟡", "🟢", "🟣", "🟤", "🟥", "🟦", "🟧", "🟨", "🟩", "🟪", "🟫",
});

const auto flagEmojis = std::to_array<std::string_view>({
    "🇦🇨",
    "🇦🇩",
    "🇦🇪",
    "🇦🇫",
    "🇦🇬",
    "🇦🇮",
    "🇦🇱",
    "🇦🇲",
    "🇦🇴",
    "🇦🇶",
    "🇦🇷",
    "🇦🇸",
    "🇦🇹",
    "🇦🇺",
    "🇦🇼",
    "🇦🇽",
    "🇦🇿",
    "🇧🇦",
    "🇧🇧",
    "🇧🇩",
    "🇧🇪",
    "🇧🇫",
    "🇧🇬",
    "🇧🇭",
    "🇧🇮",
    "🇧🇯",
    "🇧🇱",
    "🇧🇲",
    "🇧🇳",
    "🇧🇴",
    "🇧🇶",
    "🇧🇷",
    "🇧🇸",
    "🇧🇹",
    "🇧🇻",
    "🇧🇼",
    "🇧🇾",
    "🇧🇿",
    "🇨🇦",
    "🇨🇨",
    "🇨🇩",
    "🇨🇫",
    "🇨🇬",
    "🇨🇭",
    "🇨🇮",
    "🇨🇰",
    "🇨🇱",
    "🇨🇲",
    "🇨🇳",
    "🇨🇴",
    "🇨🇵",
    "🇨🇷",
    "🇨🇺",
    "🇨🇻",
    "🇨🇼",
    "🇨🇽",
    "🇨🇾",
    "🇨🇿",
    "🇩🇪",
    "🇩🇬",
    "🇩🇯",
    "🇩🇰",
    "🇩🇲",
    "🇩🇴",
    "🇩🇿",
    "🇪🇦",
    "🇪🇨",
    "🇪🇪",
    "🇪🇬",
    "🇪🇭",
    "🇪🇷",
    "🇪🇸",
    "🇪🇹",
    "🇪🇺",
    "🇫🇮",
    "🇫🇯",
    "🇫🇰",
    "🇫🇲",
    "🇫🇴",
    "🇫🇷",
    "🇬🇦",
    "🇬🇧",
    "🇬🇩",
    "🇬🇪",
    "🇬🇫",
    "🇬🇬",
    "🇬🇭",
    "🇬🇮",
    "🇬🇱",
    "🇬🇲",
    "🇬🇳",
    "🇬🇵",
    "🇬🇶",
    "🇬🇷",
    "🇬🇸",
    "🇬🇹",
    "🇬🇺",
    "🇬🇼",
    "🇬🇾",
    "🇭🇰",
    "🇭🇲",
    "🇭🇳",
    "🇭🇷",
    "🇭🇹",
    "🇭🇺",
    "🇮🇨",
    "🇮🇩",
    "🇮🇪",
    "🇮🇱",
    "🇮🇲",
    "🇮🇳",
    "🇮🇴",
    "🇮🇶",
    "🇮🇷",
    "🇮🇸",
    "🇮🇹",
    "🇯🇪",
    "🇯🇲",
    "🇯🇴",
    "🇯🇵",
    "🇰🇪",
    "🇰🇬",
    "🇰🇭",
    "🇰🇮",
    "🇰🇲",
    "🇰🇳",
    "🇰🇵",
    "🇰🇷",
    "🇰🇼",
    "🇰🇾",
    "🇰🇿",
    "🇱🇦",
    "🇱🇧",
    "🇱🇨",
    "🇱🇮",
    "🇱🇰",
    "🇱🇷",
    "🇱🇸",
    "🇱🇹",
    "🇱🇺",
    "🇱🇻",
    "🇱🇾",
    "🇲🇦",
    "🇲🇨",
    "🇲🇩",
    "🇲🇪",
    "🇲🇫",
    "🇲🇬",
    "🇲🇭",
    "🇲🇰",
    "🇲🇱",
    "🇲🇲",
    "🇲🇳",
    "🇲🇴",
    "🇲🇵",
    "🇲🇶",
    "🇲🇷",
    "🇲🇸",
    "🇲🇹",
    "🇲🇺",
    "🇲🇻",
    "🇲🇼",
    "🇲🇽",
    "🇲🇾",
    "🇲🇿",
    "🇳🇦",
    "🇳🇨",
    "🇳🇪",
    "🇳🇫",
    "🇳🇬",
    "🇳🇮",
    "🇳🇱",
    "🇳🇴",
    "🇳🇵",
    "🇳🇷",
    "🇳🇺",
    "🇳🇿",
    "🇴🇲",
    "🇵🇦",
    "🇵🇪",
    "🇵🇫",
    "🇵🇬",
    "🇵🇭",
    "🇵🇰",
    "🇵🇱",
    "🇵🇲",
    "🇵🇳",
    "🇵🇷",
    "🇵🇸",
    "🇵🇹",
    "🇵🇼",
    "🇵🇾",
    "🇶🇦",
    "🇷🇪",
    "🇷🇴",
    "🇷🇸",
    "🇷🇺",
    "🇷🇼",
    "🇸🇦",
    "🇸🇧",
    "🇸🇨",
    "🇸🇩",
    "🇸🇪",
    "🇸🇬",
    "🇸🇭",
    "🇸🇮",
    "🇸🇯",
    "🇸🇰",
    "🇸🇱",
    "🇸🇲",
    "🇸🇳",
    "🇸🇴",
    "🇸🇷",
    "🇸🇸",
    "🇸🇹",
    "🇸🇻",
    "🇸🇽",
    "🇸🇾",
    "🇸🇿",
    "🇹🇦",
    "🇹🇨",
    "🇹🇩",
    "🇹🇫",
    "🇹🇬",
    "🇹🇭",
    "🇹🇯",
    "🇹🇰",
    "🇹🇱",
    "🇹🇲",
    "🇹🇳",
    "🇹🇴",
    "🇹🇷",
    "🇹🇹",
    "🇹🇻",
    "🇹🇼",
    "🇹🇿",
    "🇺🇦",
    "🇺🇬",
    "🇺🇲",
    "🇺🇳",
    "🇺🇸",
    "🇺🇾",
    "🇺🇿",
    "🇻🇦",
    "🇻🇨",
    "🇻🇪",
    "🇻🇬",
    "🇻🇮",
    "🇻🇳",
    "🇻🇺",
    "🇼🇫",
    "🇼🇸",
    "🇽🇰",
    "🇾🇪",
    "🇾🇹",
    "🇿🇦",
    "🇿🇲",
    "🇿🇼",
    "🎌",
    "🏁",
    "🏳️",
    "🏳️‍⚧️",
    "🏳️‍🌈",
    "🏴",
    "🏴‍☠️",
    "🚩",
});

const auto httpMediaTypes = std::to_array<std::string_view>({
    "application/gzip",
    "application/java-archive",
    "application/json",
    "application/octet-stream",
    "application/pdf",
    "application/rtf",
    "application/vnd.amazon.ebook",
    "application/vnd.mozilla.xul+xml",
    "application/x-7z-compressed",
    "application/x-abiword",
    "application/x-bzip",
    "application/x-bzip2",
    "application/x-csh",
    "application/x-freearc",
    "application/xml",
    "application/zip",
    "audio/3gpp",
    "audio/3gpp2",
    "audio/aac",
    "audio/mpeg",
    "audio/wav",
    "audio/webm",
    "font/otf",
    "font/ttf",
    "font/woff",
    "font/woff2",
    "image/bmp",
    "image/gif",
    "image/jpeg",
    "image/png",
    "image/tiff",
    "image/webp",
    "text/calendar",
    "text/css",
    "text/csv",
    "text/html",
    "text/javascript",
    "text/plain",
    "text/xml",
    "video/3gpp",
    "video/3gpp2",
    "video/mp2t",
    "video/mpeg",
    "video/webm",
    "video/x-msvideo",
});

const auto httpRequestHeaders = std::to_array<std::string_view>({
    "A-IM",
    "Accept",
    "Accept-Charset",
    "Accept-Datetime",
    "Accept-Encoding",
    "Accept-Language",
    "Access-Control-Request-Headers",
    "Access-Control-Request-Method",
    "Authorization",
    "Cache-Control",
    "Connection",
    "Content-Encoding",
    "Content-Length",
    "Content-MD5",
    "Content-Type",
    "Cookie",
    "Date",
    "Expect",
    "Forwarded",
    "From",
    "HTTP2-Settings",
    "Host",
    "If-Match",
    "If-Modified-Since",
    "If-None-Match",
    "If-Range",
    "If-Unmodified-Since",
    "Max-Forwards",
    "Origin",
    "Pragma",
    "Prefer",
    "Proxy-Authorization",
    "Range",
    "Referer",
    "TE",
    "Transfer-Encoding",
    "Upgrade",
    "Upgrade",
    "User-Agent",
    "Via",
    "Warning",
});

const auto httpResponseHeaders = std::to_array<std::string_view>({
    "Accept-CH",
    "Accept-Patch",
    "Accept-Ranges",
    "Access-Control-Allow-Credentials",
    "Access-Control-Allow-HeadersAccess-Control-Allow-Origin",
    "Access-Control-Allow-Methods",
    "Access-Control-Allow-Origin",
    "Access-Control-Expose-Headers",
    "Access-Control-Max-Age",
    "Age",
    "Allow",
    "Alt-Svc",
    "Cache-Control",
    "Connection",
    "Content-Disposition",
    "Content-Encoding",
    "Content-Language",
    "Content-Length",
    "Content-Location",
    "Content-MD5",
    "Content-Range",
    "Content-Type",
    "Date",
    "Delta-Base",
    "ETag",
    "Expires",
    "IM",
    "Last-Modified",
    "Location",
    "P3P",
    "Pragma",
    "Preference-Applied",
    "Proxy-Authenticate",
    "Public-Key-Pins",
    "Retry-After",
    "Server",
    "Set-Cookie",
    "Strict-Transport-Security",
    "Tk",
    "Transfer-Encoding",
    "Upgrade",
    "Vary",
    "WWW-Authenticate",
    "Warning",
});

}