// WAP to swap two variables using without a temp variable using a function besides the main function.

#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);
    
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    return 0;
}