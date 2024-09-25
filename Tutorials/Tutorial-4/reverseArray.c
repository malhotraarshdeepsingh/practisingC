#include <stdio.h>

int main() {
    int n;
    int arrnum[100];

    printf("Enter the size of the array (max 100): ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid size! Please enter a size between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arrnum[i]); // Read input from the user
    }

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrnum[i]);
    }
    printf("\n");

    for (int i = 0; i < n / 2; i++) {
        int temp = arrnum[i];
        arrnum[i] = arrnum[n - 1 - i];
        arrnum[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrnum[i]);
    }

    return 0;
}