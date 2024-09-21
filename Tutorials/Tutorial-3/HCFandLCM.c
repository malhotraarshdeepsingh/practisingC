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

int main() {
    int num1, num2, hcf, lcm, temp1, temp2, remainder;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Copy the values to temporary variables
    temp1 = num1;
    temp2 = num2;

    // Calculate HCF using the Euclidean algorithm
    while (temp2 != 0) {
        remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }

    hcf = temp1;

    // Calculate LCM using the relationship: LCM * HCF = num1 * num2
    lcm = (num1 * num2) / hcf;

    // Output the results
    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
