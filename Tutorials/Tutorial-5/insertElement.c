// To insert an element at a given location of an array
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &pos);
    
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (pos < 0 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[--pos] = value;

        n++;

        printf("New Array: \n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }

    return 0;
}