#include <stdio.h>

int addDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + addDigits(n / 10);
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Sum of digits of %d: %d\n", num, addDigits(num));
    return 0;
}
