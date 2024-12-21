#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Ternary operator to check even or odd
    (num % 2 == 0) ? printf("%d is even\n", num) : printf("%d is odd\n", num);
    
    return 0;
}