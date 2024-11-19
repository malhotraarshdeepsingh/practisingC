// Write a program that uses an array of pointers to strings st[] as given below. Recive a sstring and check if str1 is embedded in any of strings in str[].
#include <stdio.h>
#include <string.h>

int main() {
    const char *st[] = {"hello", "world", "embedded", "programming", "check"};
    int size = sizeof(st) / sizeof(st[0]);

    char str1[100];
    printf("Enter the substring to search: ");
    scanf("%s", str1);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strstr(st[i], str1) != NULL) { // strstr checks if str1 is a substring of st[i]
            printf("Substring '%s' found in string '%s'.\n", str1, st[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("Substring '%s' not found in any string.\n", str1);
    }

    return 0;
}