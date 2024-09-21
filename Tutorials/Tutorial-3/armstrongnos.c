#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0, power;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }

    // Check if it's an Armstrong number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
