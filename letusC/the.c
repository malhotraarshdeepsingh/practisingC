#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);  

    while (str[i] != '\0') {
        if ((str[i] == 't' || str[i] == 'T') && 
            (str[i+1] == 'h' || str[i+1] == 'H') &&
            (str[i+2] == 'e' || str[i+2] == 'E') &&
            (str[i+3] == ' ' || str[i+3] == '\0')) {
            i += 3;
            while (str[i] == ' ') {
                i++;
            }
        } else {
            result[j++] = str[i++];
        }
    }

    result[j] = '\0';

    printf("String after removing 'the': %s", result);

    return 0;
}