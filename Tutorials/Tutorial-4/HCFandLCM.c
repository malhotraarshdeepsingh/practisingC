// How the Euclidean Algorithm Works:
// The key insight of the Euclidean algorithm is based on the property:
// The GCD of two numbers a and b (where a > b) is the same as the GCD of b and the remainder of a divided by b.
// The algorithm works by replacing the larger number with the remainder of the division of the two numbers. This process is repeated until the remainder is zero. At that point, the smaller number (or the last non-zero remainder) is the GCD.

// Steps of the Euclidean Algorithm:
// Divide the larger number (a) by the smaller number (b).
// Find the remainder of this division (r = a % b).
// Replace a with b and b with the remainder r.
// Repeat the process until the remainder becomes zero.
// When the remainder is zero, the last non-zero b is the GCD.

#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) return a;
    return hcf(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("HCF of %d and %d: %d\n", a, b, hcf(a, b));
    printf("LCM of %d and %d: %d\n", a, b, lcm(a, b));

    return 0;
}
