#include <stdio.h>

int main() {
    printf("\033[31mRed Text\033[0m\n");          // Red
    printf("\033[32mGreen Text\033[0m\n");        // Green
    printf("\033[34mBlue Text\033[0m\n");         // Blue
    printf("\033[33mYellow Text\033[0m\n");       // Yellow
    printf("\033[36mCyan Text\033[0m\n");         // Cyan
    printf("\033[35mMagenta Text\033[0m\n");      // Magenta
    printf("\033[37mWhite Text\033[0m\n");         // White
    printf("\033[30mBlack Text\033[0m\n");         // Black
    printf("\033[91mLight Red Text\033[0m\n");     // Light Red
    printf("\033[92mLight Green Text\033[0m\n");   // Light Green
    printf("\033[94mLight Blue Text\033[0m\n");    // Light Blue
    printf("\033[93mLight Yellow Text\033[0m\n");  // Light Yellow
    printf("\033[96mLight Cyan Text\033[0m\n");    // Light Cyan
    printf("\033[95mLight Magenta Text\033[0m\n"); // Light Magenta
    printf("\033[97mBright White Text\033[0m\n");  // Bright White (or Light White)
    printf("\033[90mDark Gray Text\033[0m\n");     // Dark Gray
    printf("\033[38;5;208mOrange Text\033[0m\n");    // Orange
    printf("\033[38;5;129mPurple Text\033[0m\n");    // Purple
    printf("\033[38;5;130mBrown Text\033[0m\n");     // Brown
    printf("\033[38;5;200mPink Text\033[0m\n");       // Pink
    printf("\033[38;5;38mTeal Text\033[0m\n");       // Teal
    printf("\033[38;5;100mOlive Text\033[0m\n");      // Olive
    printf("\033[38;5;93mViolet Text\033[0m\n");     // Violet
    printf("\033[38;5;118mLime Text\033[0m\n");      // Lime
    printf("\033[38;5;18mIndigo Text\033[0m\n");     // Indigo
    printf("\033[38;5;250mSilver Text\033[0m\n");    // Silver
    printf("\033[38;5;220mGold Text\033[0m\n");      // Gold
    printf("\033[38;5;88mMaroon Text\033[0m\n");      // Maroon
    printf("\033[38;5;17mNavy Text\033[0m\n");       // Navy
    printf("\033[38;5;51mTurquoise Text\033[0m\n");   // Turquoise
    printf("\033[38;5;117mSky Blue Text\033[0m\n");  // Sky Blue
    printf("\033[38;5;230mBeige Text\033[0m\n");     // Beige
    printf("\033[38;5;209mCoral Text\033[0m\n");     // Coral
    printf("\033[38;5;141mLavender Text\033[0m\n");  // Lavender
    printf("\033[38;5;203mSalmon Text\033[0m\n");    // Salmon
    printf("\033[38;5;180mTan Text\033[0m\n");       // Tan
    printf("\033[38;5;193mKhaki Text\033[0m\n");     // Khaki
    printf("\033[38;5;89mCrimson Text\033[0m\n");    // Crimson
    printf("\033[38;5;59mSlate Gray Text\033[0m\n"); // Slate Gray
    printf("\033[38;5;34mForest Green Text\033[0m\n");// Forest Green
    printf("\033[38;5;27mRoyal Blue Text\033[0m\n"); // Royal Blue
    printf("\033[38;5;215mPeach Text\033[0m\n");     // Peach
    printf("\033[38;5;139mPlum Text\033[0m\n");      // Plum

    printf("\n");

    printf("\033[41;37mRed Background White Text\033[0m\n");      // Red background, white text
    printf("\033[42;30mGreen Background Black Text\033[0m\n");    // Green background, black text
    printf("\033[44;97mBlue Background Bright White Text\033[0m\n"); // Blue background, bright white text
    printf("\033[43;30mYellow Background Black Text\033[0m\n");   // Yellow background, black text
    printf("\033[46;30mCyan Background Black Text\033[0m\n");     // Cyan background, black text
    printf("\033[45;97mMagenta Background Bright White Text\033[0m\n"); // Magenta background, bright white text
    printf("\033[47;30mWhite Background Black Text\033[0m\n");     // White background, black text
    printf("\033[40;97mBlack Background Bright White Text\033[0m\n");     // Black background, bright white text
    printf("\033[101;30mLight Red Background Black Text\033[0m\n");   // Light Red background, black text
    printf("\033[102;30mLight Green Background Black Text\033[0m\n"); // Light Green background, black text
    printf("\033[104;30mLight Blue Background Black Text\033[0m\n");  // Light Blue background, black text
    printf("\033[103;30mLight Yellow Background Black Text\033[0m\n"); // Light Yellow background, black text
    printf("\033[106;30mLight Cyan Background Black Text\033[0m\n");   // Light Cyan background, black text
    printf("\033[105;30mLight Magenta Background Black Text\033[0m\n");// Light Magenta background, black text
    printf("\033[48;5;208;30mOrange Background Black Text\033[0m\n"); // Orange background, black text
    printf("\033[48;5;129;97mPurple Background Bright White Text\033[0m\n"); // Purple background, bright white text
    printf("\033[48;5;130;97mBrown Background Bright White Text\033[0m\n"); // Brown background, bright white text
    printf("\033[48;5;200;30mPink Background Black Text\033[0m\n");   // Pink background, black text
    printf("\033[48;5;38;97mTeal Background Bright White Text\033[0m\n");   // Teal background, bright white text
    printf("\033[48;5;100;97mOlive Background Bright White Text\033[0m\n");  // Olive background, bright white text
    printf("\033[48;5;93;30mViolet Background Black Text\033[0m\n");     // Violet background, black text
    printf("\033[48;5;118;30mLime Background Black Text\033[0m\n");      // Lime background, black text
    printf("\033[48;5;18;97mIndigo Background Bright White Text\033[0m\n");     // Indigo background, bright white text
    printf("\033[48;5;250;30mSilver Background Black Text\033[0m\n");    // Silver background, black text
    printf("\033[48;5;220;30mGold Background Black Text\033[0m\n");      // Gold background, black text
    printf("\033[48;5;88;97mMaroon Background Bright White Text\033[0m\n");      // Maroon background, bright white text
    printf("\033[48;5;17;97mNavy Background Bright White Text\033[0m\n");       // Navy background, bright white text
    printf("\033[48;5;51;30mTurquoise Background Black Text\033[0m\n");   // Turquoise background, black text
    printf("\033[48;5;117;30mSky Blue Background Black Text\033[0m\n");  // Sky Blue background, black text
    printf("\033[48;5;230;30mBeige Background Black Text\033[0m\n");     // Beige background, black text
    printf("\033[48;5;209;30mCoral Background Black Text\033[0m\n");     // Coral background, black text
    printf("\033[48;5;141;30mLavender Background Black Text\033[0m\n");  // Lavender background, black text
    printf("\033[48;5;203;30mSalmon Background Black Text\033[0m\n");    // Salmon background, black text
    printf("\033[48;5;180;30mTan Background Black Text\033[0m\n");       // Tan background, black text
    printf("\033[48;5;193;30mKhaki Background Black Text\033[0m\n");     // Khaki background, black text
    printf("\033[48;5;89;97mCrimson Background Bright White Text\033[0m\n");    // Crimson background, bright white text
    printf("\033[48;5;59;97mSlate Gray Background Bright White Text\033[0m\n"); // Slate Gray background, bright white text
    printf("\033[48;5;34;97mForest Green Background Bright White Text\033[0m\n");// Forest Green background, bright white text
    printf("\033[48;5;27;97mRoyal Blue Background Bright White Text\033[0m\n"); // Royal Blue background, bright white text
    printf("\033[48;5;215;30mPeach Background Black Text\033[0m\n");     // Peach background, black text
    printf("\033[48;5;139;97mPlum Background Bright White Text\033[0m\n");      // Plum background, bright white text

    return 0;
}
