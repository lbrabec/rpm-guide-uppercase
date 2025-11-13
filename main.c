#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_usage(const char *progname) {
    printf("Usage: %s <text>\n", progname);
    printf("Converts text to uppercase.\n");
}

void to_uppercase(const char *input, char *output) {
    int i;
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            output[i] = input[i] - 32;
        } else {
            output[i] = input[i];
        }
    }
    output[i] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_usage(argv[0]);
        return 1;
    }

    char *uppercase = NULL;
    to_uppercase(argv[1], uppercase);
    printf("%s\n", uppercase);
    free(uppercase);
    
    return 0;
}

