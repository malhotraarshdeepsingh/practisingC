#include <stdio.h>

int main() {
    char source[50], destination[50];

    printf("Enter the source string: ");
    scanf("%s", source);
    
    char *src = source;
    char *dest = destination;

    while ((*dest++ = *src++) != '\0');
    
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    
    return 0;
}
