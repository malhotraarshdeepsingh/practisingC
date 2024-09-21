#include <stdio.h>

int main() {
    double num, factorial = 1;
    int i = 1;

    printf("Enter a number: ");
    scanf("%lf", &num);

    do {
        factorial *= i;
        i++;
    } while (i <= num);

    printf("Factorial of %lf is: %lf\n", num, factorial);
    // Output- Factorial of 100.000000 is: 93326215443944102000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.000000
    return 0;
}
