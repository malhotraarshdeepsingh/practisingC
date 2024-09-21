#include <stdio.h>

int main() {
    int n, num, min, max;

    // Input how many numbers
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // First input for initialization
    printf("Enter number 1: ");
    scanf("%d", &num);
    min = max = num;

    // Find smallest and largest numbers
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        // check for values and store
        if (num > max) {
            max = num;
        } 
        if (num < min) {
            min = num;
        }
    }

    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n", max);

    return 0;
}
