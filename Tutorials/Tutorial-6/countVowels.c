#include <stdio.h>
#include <ctype.h>

int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char c = tolower(*str);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
        str++;
    }
    return count;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str);

    printf("Number of vowels: %d\n", countVowels(str));
    return 0;
}
