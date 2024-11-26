#include <stdio.h>
#include "MyMathFunctions.c"

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d: %d\n", num, square(num));
    printf("Cube of %d: %d\n", num, cube(num));
    printf("%d is %s.\n", num, isEven(num) ? "even" : "odd");

    return 0;
}
