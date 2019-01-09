#ifndef _WELCOME_H
#define _WELCOME_H

#define DELIMITER   \
    "*********************************************" \
    "*********************************************"

#define SHORTDELIMITER \
    "---------------------------------------------"

typedef struct typeGuessState  {
    int     flag;
    int     nEntered;
    int     nGuessed;
    int     nFailed;
    int     lenWord;
    char*   theWord;
    char    letterEntered;
    int     lettersEntered[27];
    int     lettersFound[50];
} GuessState;

void output(const char *fmt, ...);
void printLevel1();
void printLevel2();
void printCategory(char **);
void printContinue();
void printContinue2();
void printScore();
void printScoreboard();
void printLine();
void printShortLine();
void printWelcome();
void printGallows();
void printState(GuessState);

#define   LOGOHEIGHT      18
#define   GALLOWSHEIGHT   23
#define   GALLOWSWIDTH    25
#define   WINWIDTH        90

static const char * const welcome[] = {
    "░░╗    ░░╗░░░░░░░╗░░╗      ░░░░░░╗ ░░░░░░╗ ░░░╗   ░░░╗░░░░░░░╗  ░░░░░░░░╗ ░░░░░░╗    ",
    "░░║    ░░║░░╔════╝░░║     ░░╔════╝░░╔═══░░╗░░░░╗ ░░░░║░░╔════╝  ╚══░░╔══╝░░╔═══░░╗   ",
    "░░║ ░╗ ░░║░░░░░╗  ░░║     ░░║     ░░║   ░░║░░╔░░░░╔░░║░░░░░╗       ░░║   ░░║   ░░║   ",
    "░░║░░░╗░░║░░╔══╝  ░░║     ░░║     ░░║   ░░║░░║╚░░╔╝░░║░░╔══╝       ░░║   ░░║   ░░║   ",
    "╚░░░╔░░░╔╝░░░░░░░╗░░░░░░░╗╚░░░░░░╗╚░░░░░░╔╝░░║ ╚═╝ ░░║░░░░░░░╗     ░░║   ╚░░░░░░╔╝   ",
    " ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝     ╚═╝    ╚═════╝    ",
    "       ░░░░░░░░╗░░╗  ░░╗░░░░░░░╗   ░░░░░░╗  ░░░░░╗ ░░░╗   ░░░╗░░░░░░░╗               ",
    "       ╚══░░╔══╝░░║  ░░║░░╔════╝  ░░╔════╝ ░░╔══░░╗░░░░╗ ░░░░║░░╔════╝               ",
    "          ░░║   ░░░░░░░║░░░░░╗    ░░║  ░░░╗░░░░░░░║░░╔░░░░╔░░║░░░░░╗                 ",
    "          ░░║   ░░╔══░░║░░╔══╝    ░░║   ░░║░░╔══░░║░░║╚░░╔╝░░║░░╔══╝                 ",
    "          ░░║   ░░║  ░░║░░░░░░░╗  ╚░░░░░░╔╝░░║  ░░║░░║ ╚═╝ ░░║░░░░░░░╗  ░░╗░░╗░░╗    ",
    "          ╚═╝   ╚═╝  ╚═╝╚══════╝   ╚═════╝ ╚═╝▄ ╚═╝╚═╝     ╚═╝╚══════╝  ╚═╝╚═╝╚═╝    ",
    "                ██████╗  ██████╗ ██████╗ ███████╗ ░░░╗   ░░░╗ ░░░░░╗ ░░░╗   ░░╗   ░░╗",
    "                ██╔══██╗██╔═══██╗██╔══██╗██╔═█══╝ ░░░░╗ ░░░░║░░╔══░░╗░░░░╗  ░░║   ░░║",
    "                ██████╔╝██║   ██║██████╔╝█████╗   ░░╔░░░░╔░░║░░░░░░░║░░╔░░╗ ░░║   ░░║",
    "                ██╔══██╗██║   ██║██╔═══╝ ██╔█═╝   ░░║╚░░╔╝░░║░░╔══░░║░░║╚░░╗░░║   ╚═╝",
    "                ██║  ██║╚██████╔╝██║     ███████╗ ░░║ ╚═╝ ░░║░░║  ░░║░░║ ╚░░░░║   ░░╗",
    "                ╚═╝  ╚═╝ ╚═════╝ ╚═╝     ╚═█════╝ ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝   ╚═╝"
};

static const char * const welcome1[] = {
    " _    _      _                            _           ",
    "| |  | |    | |                          | |          ",
    "| |  | | ___| | ___ ___  _ __ ___   ___  | |_ ___     ",
    "| |/\\| |/ _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | __/ _ \\    ",
    "\\  /\\  /  __/ | (_| (_) | | | | | |  __/ | || (_) |   ",
    " \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|  \\__\\___/    ",
    "  _   _                                               ",
    " | | | |                                              ",
    " | |_| |__   ___    __ _  __ _ _ __ ___   ___         ",
    " | __| '_ \\ / _ \\  / _` |/ _` | '_ ` _ \\ / _ \\        ",
    " | |_| | | |  __/ | (_| | (_| | | | | | |  __/  _ _ _ ",
    "  \\__|_| |_|\\___|  \\__, |\\__,_|_| |_| |_|\\___| (_|_|_)",
    "  _   _             __/ |                         _   ",
    " | | | |           |___/                         | |  ",
    " | |_| | __ _ _ __   __ _ _ __ ___   __ _ _ __   | |  ",
    " |  _  |/ _` | '_ \\ / _` | '_ ` _ \\ / _` | '_ \\  | |  ",
    " | | | | (_| | | | | (_| | | | | | | (_| | | | | |_|  ",
    " \\_| |_/\\__,_|_| |_|\\__, |_| |_| |_|\\__,_|_| |_| (_)  ",
    "                     __/ |                            ",
    "                    |___/                             "};

static const char* const gallows[8][GALLOWSHEIGHT] = {
    {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    },
    {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|",
        "|\"|\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|\"|",
        "| |                   | |",
        ": :                   : :",
        ". .                   . ."
    },
    {
        "_____________________",
        "| .__________________|",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|",
        "|\"|\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|\"|",
        "| |                   | |",
        ": :                   : :",
        ". .                   . ."
    },
    {
        "____________.._______",
        "| .__________))______|",
        "| | / /      ||",
        "| |/ /       ||",
        "| | /        ||",
        "| |/         ||",
        "| |          ||",
        "| |         \" \" ",
        "| |        \"   \" ",
        "| |        \"    \"",
        "| |         \"==\" ",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "| |",
        "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|",
        "|\"|\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|\"|",
        "| |                   | |",
        ": :                   : :",
        ". .                   . ."
    },
    {
        "____________.._______",
        "| .__________))______|",
        "| | / /      ||",
        "| |/ /       ||",
        "| | /       .---.",
        "| |/       / _ _ \\",
        "| |        |     |",
        "| |         \\ - / ",
        "| |        .-`='-.",
        "| |       /Y . . Y\\",
        "| |      // |   | \\\\",
        "| |     //  | . |  \\\\",
        "| |    ')   |   |   (`",
        "| |         ||'||",
        "| |         || ||",
        "| |         || ||",
        "| |         || ||",
        "| |        /_| |_\\",
        "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|",
        "|\"|\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|\"|",
        "| |                   | |",
        ": :                   : :",
        ". .                   . ."
    },
    {
        "____________.._______",
        "| .__________))______|",
        "| | / /      ||",
        "| |/ /       ||",
        "| | /       .---.",
        "| |/   ')  / _ _ \\",
        "| |     \\\\ |     |",
        "| |      \\\\ \\ - / ",
        "| |       \\.-`='-.",
        "| |        Y . . Y\\",
        "| |         |   | \\\\",
        "| |         | . |  \\\\",
        "| |         |   |   (`",
        "| |         ||'||",
        "| |         || ||",
        "| |         || ||",
        "| |         || ||",
        "| |        /_| |_\\",
        "\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|",
        "|\"|\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"|\"|",
        "| |                   | |",
        ": :                   : :",
        ". .                   . ."
    },
    {
        "____________.._______",
        "| .__________))______|",
        "| | / /      ||",
        "| |/ /       ||",
        "| | /        ||.-''.",
        "| |/         |/  _  \\",
        "| |          ||  `/,|",
        "| |          (\\\\`_.'",
        "| |         .-`--'.",
        "| |        /Y . . Y\\",
        "| |       // |   | \\\\",
        "| |      //  | . |  \\\\",
        "| |     ')   |   |   (`",
        "| |          ||'||",
        "| |          || ||",
        "| |          || ||",
        "| |          || ||",
        "| |         / | | \\",
        "\"\"\"\"\"\"\"\"\"\"|_`-' `-' |\"\"\"|",
        "|\"|\"\"\"\"\"\"\"\\ \\       '\"|\"|",
        "| |        \\ \\        | |",
        ": :         \\ \\       : :",
        ". .          `'       . ."
    },
    {
        "____________.._______",
        "| .__________))______|",
        "| | / /      ||",
        "| |/ /       ||",
        "| | /        ||.-''.",
        "| |/         |/  _  \\",
        "| |          ||  `/,|",
        "| |          (\\\\`_.'",
        "| |         .-`--'.",
        "| |        /Y . . Y\\",
        "| |       // |   | \\\\",
        "| |      //  | . |  \\\\",
        "| |     ')   |   |   (`",
        "| |          ||'||",
        "| |          || ||",
        "| |          || ||",
        "| |          || ||",
        "| |         / | | \\",
        "\"\"\"\"\"\"\"\"\"\"|_`-' `-' |\"\"\"|",
        "|\"|\"\"\"\"\"\"\"\\ \\       '\"|\"|",
        "| |        \\ \\        | |",
        ": :         \\ \\       : :",
        ". .          `'       . ."
    }
};

static const char * const frame[] = {
    "*********************************************************** *                             *",
    "***                                                     *** *                             *",
    "***  ROUND:                                             *** *                             *",
    "*********************************************************** *                             *",
    "*********************************************************** *                             *",
    "***                                                     *** *                             *",
    "***                                                     *** *                             *",
    "***                                                     *** *                             *",
    "*********************************************************** *                             *",
    "***                                                     *** *                             *",
    "***  The number of letters you guessed:  _              *** *                             *",
    "*********************************************************** *                             *",
    "***                                                     *** *                             *",
    "***  The number of times you failed:  _                 *** *                             *",
    "*********************************************************** *                             *",
    "***                                                     *** *                             *",
    "***           A    B    C    D    E    F    G           *** *                             *",
    "***           H    I    J    K    L    M    N           *** *                             *",
    "***           O    P    Q         R    S    T           *** *                             *",
    "***           U    V    W         X    Y    Z           *** *                             *",
    "***                          _                          *** *                             *",
    "***                                                     *** *                             *",
    "*********************************************************** *                             *",
};

static const int alphabetPos[27][2] = {
    {16, 14},
    {16, 19},
    {16, 24},
    {16, 29},
    {16, 34},
    {16, 39},
    {16, 44},
    {17, 14},
    {17, 19},
    {17, 24},
    {17, 29},
    {17, 34},
    {17, 39},
    {17, 44},
    {18, 14},
    {18, 19},
    {18, 24},
    {18, 34},
    {18, 39},
    {18, 44},
    {19, 14},
    {19, 19},
    {19, 24},
    {19, 34},
    {19, 39},
    {19, 44},
    {20, 29}
};

#endif
