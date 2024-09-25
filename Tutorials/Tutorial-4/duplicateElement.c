#include <stdio.h>

int main() {
    int arr[100], temp[100], n, i, j, k = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            temp[k++] = arr[i];
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}