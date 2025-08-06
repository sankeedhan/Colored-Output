#include <stdio.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RED_B "\x1b[41m"
#define ANSI_COLOR_GREEN_B "\x1b[42m"
#define ANSI_COLOR_YELLOW_B "\x1b[43m"
#define ANSI_COLOR_BLUE_B "\x1b[44m"
#define ANSI_COLOR_MAGENTA_B "\x1b[45m"
#define ANSI_COLOR_CYAN_B "\x1b[46m"
#define ANSI_COLOR_RESET "\x1b[0m"

#define PRINT_R(X) printf("%s%s%s\n", ANSI_COLOR_RED, X, ANSI_COLOR_RESET)
#define PRINT_R_B(X) printf("%s%s%s\n", ANSI_COLOR_RED_B, X, ANSI_COLOR_RESET)

#define PRINT_G(X) printf("%s%s%s\n", ANSI_COLOR_GREEN, X, ANSI_COLOR_RESET)
#define PRINT_G_B(X) printf("%s%s%s\n", ANSI_COLOR_GREEN_B, X, ANSI_COLOR_RESET)

#define PRINT_Y(X) printf("%s%s%s\n", ANSI_COLOR_YELLOW, X, ANSI_COLOR_RESET)
#define PRINT_Y_B(X) printf("%s%s%s\n", ANSI_COLOR_YELLOW_B, X, ANSI_COLOR_RESET)

#define PRINT_B(X) printf("%s%s%s\n", ANSI_COLOR_BLUE, X, ANSI_COLOR_RESET)
#define PRINT_B_B(X) printf("%s%s%s\n", ANSI_COLOR_BLUE_B, X, ANSI_COLOR_RESET)

#define PRINT_M(X) printf("%s%s%s\n", ANSI_COLOR_MAGENTA, X, ANSI_COLOR_RESET)
#define PRINT_M_B(X) printf("%s%s%s\n", ANSI_COLOR_MAGENTA_B, X, ANSI_COLOR_RESET)

#define PRINT_C(X) printf("%s%s%s\n", ANSI_COLOR_CYAN, X, ANSI_COLOR_RESET)
#define PRINT_C_B(X) printf("%s%s%s\n", ANSI_COLOR_CYAN_B, X, ANSI_COLOR_RESET)

int 
main(int argc, char const *argv[])
{
    PRINT_R("This text is RED!");
    PRINT_R_B("This background is RED!");
    PRINT_G("This text is GREEN!");
    PRINT_G_B("This background is GREEN!");
    PRINT_Y("This text is YELLOW!");
    PRINT_Y_B("This background is YELLOW!");
    PRINT_B("This text is BLUE!");
    PRINT_B_B("This background is BLUE!");
    PRINT_M("This text is MAGENTA!");
    PRINT_M_B("This background is MAGENTA!");
    PRINT_C("This text is CYAN!");
    PRINT_C_B("This background is CYAN!");
    
    return 0;
}