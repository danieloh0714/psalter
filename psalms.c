#include "psalms.h"

#define ESC_RESET "\033[m"
#define ESC_ITALIC "\033[3m"

const char *psalms[150] = {
    // Psalm 1
    "1   That man hath perfect blessedness,\n    who walketh not astray\n    In counsel of ungodly men,\n    nor stands in sinners’ way,\n\n    Nor sitteth in the scorner’s chair:\n2   But placeth his delight\n    Upon God’s law, and meditates\n    on his law day and night.\n\n3   He shall be like a tree that grows\n    near planted by a river,\n    Which in his season yields his fruit,\n    and his leaf fadeth never:\n\n    And all he doth shall prosper well\n4   The wicked are not so;\n    But like they are unto the chaff,\n    which wind drives to and fro.\n\n5   In judgment therefore shall not stand\n    such as ungodly are;\n    Nor in th’ assembly of the just\n    shall wicked men appear.\n\n6   For why? the way of godly men\n    unto the Lord is known:\n    Whereas the way of wicked men\n    shall quite be overthrown.",
    // Psalm 2
    "1   Why rage the heathen? and vain things\n    why do the people mind?\n2   Kings of the earth do set themselves,\n    and princes are combin’d,\n\n    To plot against the Lord, and his\n    Anointed, saying thus,\n3   Let us asunder break their bands,\n    and cast their cords from us.\n\n4   He that in heaven sits shall laugh;\n    the Lord shall scorn them all.\n5   Then shall he speak to them in wrath,\n    in rage he vex them shall.\n\n6   Yet, notwithstanding, I have him\n    to be my King appointed;\n    And over Sion, my holy hill,\n    I have him King anointed.\n\n7   The sure decree I will declare:\n    The Lord hath said to me,\n    Thou art mine only Son; this day\n    I have begotten thee.\n\n8   Ask of me, and for heritage\n    the heathen I’ll make thine;\n    And, for possession, I to thee\n    will give earth’s utmost line.\n\n9   Thou shalt, as with a weighty rod\n    of iron, break them all;\n    And, as a potter’s sherd, thou shalt\n    them dash in pieces small.\n\n10  Now therefore, kings, be wise; be taught,\n    ye judges of the earth:\n11  Serve God in fear, and see that ye\n    join trembling with your mirth.\n\n12  Kiss ye the Son, lest in his ire\n    ye perish from the way,\n    If once his wrath begin to burn:\n    bless’d all that on him stay.",
    // Psalm 3
    "",
    // Psalm 4
    "",
    // Psalm 5
    "",
    // Psalm 6
    "",
    // Psalm 7
    "",
    // Psalm 8
    "",
    // Psalm 9
    "",
    // Psalm 10
    "",
    // Psalm 11
    "",
    // Psalm 12
    "",
    // Psalm 13
    "",
    // Psalm 14
    "",
    // Psalm 15
    "",
    // Psalm 16
    "",
    // Psalm 17
    "",
    // Psalm 18
    "",
    // Psalm 19
    "",
    // Psalm 20
    "",
    // Psalm 21
    "",
    // Psalm 22
    "",
    // Psalm 23
    "",
    // Psalm 24
    "",
    // Psalm 25
    "",
    // Psalm 26
    "",
    // Psalm 27
    "",
    // Psalm 28
    "",
    // Psalm 29
    "",
    // Psalm 30
    "",
    // Psalm 31
    "",
    // Psalm 32
    "",
    // Psalm 33
    "",
    // Psalm 34
    "",
    // Psalm 35
    "",
    // Psalm 36
    "",
    // Psalm 37
    "",
    // Psalm 38
    "",
    // Psalm 39
    "",
    // Psalm 40
    "",
    // Psalm 41
    "",
    // Psalm 42
    "",
    // Psalm 43
    "",
    // Psalm 44
    "",
    // Psalm 45
    "",
    // Psalm 46
    "",
    // Psalm 47
    "",
    // Psalm 48
    "",
    // Psalm 49
    "",
    // Psalm 50
    "",
    // Psalm 51
    "",
    // Psalm 52
    "",
    // Psalm 53
    "",
    // Psalm 54
    "",
    // Psalm 55
    "",
    // Psalm 56
    "",
    // Psalm 57
    "",
    // Psalm 58
    "",
    // Psalm 59
    "",
    // Psalm 60
    "",
    // Psalm 61
    "",
    // Psalm 62
    "",
    // Psalm 63
    "",
    // Psalm 64
    "",
    // Psalm 65
    "",
    // Psalm 66
    "",
    // Psalm 67
    "",
    // Psalm 68
    "",
    // Psalm 69
    "",
    // Psalm 70
    "",
    // Psalm 71
    "",
    // Psalm 72
    "",
    // Psalm 73
    "",
    // Psalm 74
    "",
    // Psalm 75
    "",
    // Psalm 76
    "",
    // Psalm 77
    "",
    // Psalm 78
    "",
    // Psalm 79
    "",
    // Psalm 80
    "",
    // Psalm 81
    "",
    // Psalm 82
    "",
    // Psalm 83
    "",
    // Psalm 84
    "",
    // Psalm 85
    "",
    // Psalm 86
    "",
    // Psalm 87
    "",
    // Psalm 88
    "",
    // Psalm 89
    "",
    // Psalm 90
    "",
    // Psalm 91
    "",
    // Psalm 92
    "",
    // Psalm 93
    "",
    // Psalm 94
    "",
    // Psalm 95
    "",
    // Psalm 96
    "",
    // Psalm 97
    "",
    // Psalm 98
    "",
    // Psalm 99
    "",
    // Psalm 100
    "",
    // Psalm 101
    "",
    // Psalm 102
    "",
    // Psalm 103
    "",
    // Psalm 104
    "",
    // Psalm 105
    "",
    // Psalm 106
    "",
    // Psalm 107
    "",
    // Psalm 108
    "",
    // Psalm 109
    "",
    // Psalm 110
    "",
    // Psalm 111
    "",
    // Psalm 112
    "",
    // Psalm 113
    "",
    // Psalm 114
    "",
    // Psalm 115
    "",
    // Psalm 116
    "",
    // Psalm 117
    "",
    // Psalm 118
    "",
    // Psalm 119
    "",
    // Psalm 120
    "",
    // Psalm 121
    "",
    // Psalm 122
    "",
    // Psalm 123
    "",
    // Psalm 124
    "",
    // Psalm 125
    "",
    // Psalm 126
    "",
    // Psalm 127
    "",
    // Psalm 128
    "",
    // Psalm 129
    "",
    // Psalm 130
    "",
    // Psalm 131
    "",
    // Psalm 132
    "",
    // Psalm 133
    "",
    // Psalm 134
    "",
    // Psalm 135
    "",
    // Psalm 136
    "",
    // Psalm 137
    "",
    // Psalm 138
    "",
    // Psalm 139
    "",
    // Psalm 140
    "",
    // Psalm 141
    "",
    // Psalm 142
    "",
    // Psalm 143
    "",
    // Psalm 144
    "",
    // Psalm 145
    "",
    // Psalm 146
    "",
    // Psalm 147
    "",
    // Psalm 148
    "",
    // Psalm 149
    "",
    // Psalm 150
    "",
};
