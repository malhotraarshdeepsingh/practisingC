#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    int i = 0, j = len - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char *strings[5] = {"hello", "world", "programming", "reverse", "example"};

    printf("Original strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < 5; i++) {
        reverseString(strings[i]);
    }

    printf("\nReversed strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}