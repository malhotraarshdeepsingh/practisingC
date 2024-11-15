#include <stdio.h>
#include <string.h>

void concatenate(char *s1, char *s2, char *result) {
    while (*s1) *result++ = *s1++;
    while (*s2) *result++ = *s2++;
    *result = '\0'; // terminate to ensure no garbage value
}

int compareStrings(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2) return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main() {
    char str1[50], str2[50], result[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    concatenate(str1, str2, result);
    printf("Concatenated string: %s\n", result);

    int cmp = compareStrings(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");

    return 0;
}
