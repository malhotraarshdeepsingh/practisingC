#include <stdio.h>

int main() {
    char charArr[5];
    int intArr[5];
    float floatArr[5];

    printf("Addresses of char array elements:\n");
    for (int i = 0; i < 5; i++)
        printf("%p\n", (void *)&charArr[i]);

    // Addresses of char array elements:
        // 0x7ffdb62eb0a3
        // 0x7ffdb62eb0a4
        // 0x7ffdb62eb0a5
        // 0x7ffdb62eb0a6
        // 0x7ffdb62eb0a7

    printf("Addresses of int array elements:\n");
    for (int i = 0; i < 5; i++)
        printf("%p\n", (void *)&intArr[i]);

    // Addresses of int array elements:
        // 0x7ffdb62eb080
        // 0x7ffdb62eb084
        // 0x7ffdb62eb088
        // 0x7ffdb62eb08c
        // 0x7ffdb62eb090
    
    printf("Addresses of float array elements:\n");
    for (int i = 0; i < 5; i++)
        printf("%p\n", (void *)&floatArr[i]);

    // Addresses of float array elements:
        // 0x7ffdb62eb060
        // 0x7ffdb62eb064
        // 0x7ffdb62eb068
        // 0x7ffdb62eb06c
        // 0x7ffdb62eb070
    
    return 0;
}
