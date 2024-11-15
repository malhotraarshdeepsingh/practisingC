#include <stdio.h>
#include <string.h>

void printPattern(char *str) {
    int len = strlen(str);

    for (int i = 1; i <= len; i += 2) {
        for (int j = 0; j < i; j++)
            printf("%c ", str[j]);
        printf("\n");
    }

    for (int i = len - 2; i >= 1; i -= 2) {
        for (int j = 0; j < i; j++)
            printf("%c ", str[j]);
        printf("\n");
    }
}

int main() {
    char str[] = "UNIVERSITY";
    printPattern(str);
    return 0;
}
