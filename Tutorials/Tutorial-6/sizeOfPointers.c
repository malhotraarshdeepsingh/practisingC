#include <stdio.h>

int main() {
    int *intPtr;
    char *charPtr;
    float *floatPtr;
    double *doublePtr;

    printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));
    printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));
    printf("Size of float pointer: %zu bytes\n", sizeof(floatPtr));
    printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));

    // Size of int pointer: 8 bytes
    // Size of char pointer: 8 bytes
    // Size of float pointer: 8 bytes
    // Size of double pointer: 8 bytes

    return 0;
}
