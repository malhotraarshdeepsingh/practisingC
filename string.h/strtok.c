// The strtok() function splits a string into tokens based on delimiters.

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World! How are you?";
    char *token = strtok(str, " ");  // Split by space

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");  // Continue tokenizing
    }

    return 0;
}