#include <stdio.h>

int main() {
    int num, result = 0, place = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit == 0) {
            digit = 1;
        }
        result = result + digit * place;
        num = num / 10;
        place = place * 10;
    }

    printf("Resultant number: %d\n", result);

    return 0;
}