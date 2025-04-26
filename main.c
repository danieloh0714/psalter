#include "psalms.h"
#include <stdio.h>
#include <stdlib.h>

#define ESC_RESET "\033[m"
#define ESC_ITALIC "\033[3m"
#define ESC_UNDERLINE "\033[4m"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Error: invalid number of arguments\n");
        return 1;
    }

    int psalm_number = atoi(argv[1]);

    if (psalm_number == 0 || psalm_number > 150) {
        fprintf(stderr, "Error: Psalm must be from 1-150\n");
        return 1;
    }

    Psalm psalm = psalms[psalm_number - 1];

    printf(ESC_UNDERLINE "Psalm %d\n" ESC_RESET, psalm_number);
    if (psalm.superscription) {
        printf(ESC_ITALIC "\n%s\n" ESC_RESET, psalm.superscription);
    }
    printf("\n%s\n", psalm.text);

    return 0;
}
