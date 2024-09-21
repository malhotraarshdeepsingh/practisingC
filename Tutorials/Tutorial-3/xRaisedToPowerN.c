#include <stdio.h>

int main() {
    int x, n, result = 1;
    
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    printf("%d raised to the power %d is: %d\n", x, n, result);
    return 0;
}
