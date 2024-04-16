#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "xp_activate32.h"

const char* error_messages[] = {
    /* 1 */ "Installation ID too short",
    /* 2 */ "Installation ID too long",
    /* 3 */ "Installation ID contains invalid character",
    /* 4 */ "Installation ID contains invalid digits",
    /* 5 */ "Unsupported key! Only Windows XP and Server 2003 are supported",
    /* 6 */ "ERR_UNLUCKY",
};

void error_handler(const char* message) {
    fprintf(stderr, "ERROR: %s!\n", message);
    exit(1);
}

int main(int argc, char* argv[]) {
    char installation_id[255];

    if (argc >= 2) {
        if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
            printf("UniXPActivate - POSIX port of xp_activate32.exe\n\n");
            printf("Usage: %s <Installation ID>\n", argv[0]);
            printf("Or run without any arguments for interactive prompt.\n");
            return 0;
        }
        strcpy(installation_id, argv[1]);
    } else {
        printf("Enter Installation ID: ");
        scanf("%s", installation_id);
    }

    char confirmation_id[49];
    
    int result_code = xp_activate32_generate(installation_id, confirmation_id);

    if (result_code > 0) {
        printf("Failed!\n");
        error_handler(error_messages[result_code - 1]);
    }

    printf("Success!\n");
    printf("Installation ID: %s\n", installation_id);
    printf("Confirmation ID: %s\n", confirmation_id);

    return 0;
}
