#include <stdio.h>
#include <string.h>

int main() {
    char arr1[] = "abcdef";
    char arr2[] = "abcfgh";

    // Compare the first 4 bytes of arr1 and arr2
    int result = memcmp(arr1, arr2, 4);

    if (result < 0) {
        printf("arr1 is less than arr2.\n");
    } else if (result == 0) {
        printf("arr1 is equal to arr2.\n");
    } else {
        printf("arr1 is greater than arr2.\n");
    }

    return 0;
}