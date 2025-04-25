#include "psalms.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ESC_UNDERLINE "\033[4m"
#define ESC_RESET "\033[m"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "error: invalid number of arguments");
        return 1;
    }

    char *endptr;
    long search_number = strtol(argv[1], &endptr, 10);

    if (*endptr != '\0' || strlen(argv[1]) == 0) {
        fprintf(stderr, "error: invalid number format\n");
        return 1;
    }

    for (int i = 0; i < 150; i++) {
        if (psalms[i].number == search_number) {
            printf(ESC_UNDERLINE "Psalm %d\n\n", psalms[i].number);
            printf(ESC_RESET "%s", psalms[i].text);
            return 0;
        }
    }

    return 1;
}
