#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32], i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}

void decimalToOctal(int n) {
    int octal[32], i = 0;
    while (n > 0) {
        octal[i++] = n % 8;
        n /= 8;
    }
    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    printf("\n");
}

void decimalToHexadecimal(int n) {
    char hex[32];
    int i = 0;
    while (n > 0) {
        int temp = n % 16;
        if (temp < 10) {
            hex[i++] = temp + 48; // ASCII value of 0 is 48
        } else {
            hex[i++] = temp + 55; // ASCII value of A is 65
        }
        n /= 16;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
    printf("\n");
}

int main() {
    int num;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Convert decimal number to binary, octal, and hexadecimal
    decimalToBinary(num);
    decimalToOctal(num);
    decimalToHexadecimal(num);

    return 0;
}