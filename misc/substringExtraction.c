// Write a program in C to extract a substring from a given string
#include<stdio.h>
#include<string.h>
int main() {
    char c[1000];
    printf("Enter string: ");
    scanf("%s", c);
    printf("String is: %s\n", c);

    int si, ei;   
    printf("Enter the starting index of the part to be extracted\n");
    scanf("%d", &si);

    printf("Enter the ending index of the part to be extracted\n");
    scanf("%d", &ei);

    int i, j = 0;
    char b[1000];  

    // Extract the substring
    for(i = si; i <= ei; i++) {
        b[j++] = c[i];
    }
    b[j] = '\0';

    printf("Extracted substring: %s\n", b);

    return 0;
}
