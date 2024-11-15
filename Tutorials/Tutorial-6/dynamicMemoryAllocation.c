#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr_malloc, *arr_calloc, n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Using malloc
    arr_malloc = (int *)malloc(n * sizeof(int));
    if (arr_malloc == NULL) {
        printf("Memory allocation using malloc failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
        arr_malloc[i] = i + 1;

    printf("Array elements using malloc: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr_malloc[i]);
    printf("\n");

    // Using calloc
    arr_calloc = (int *)calloc(n, sizeof(int));
    if (arr_calloc == NULL) {
        printf("Memory allocation using calloc failed.\n");
        free(arr_malloc); // Free previously allocated memory
        return 1;
    }

    for (i = 0; i < n; i++)
        arr_calloc[i] = (i + 1) * 2; // Assigning values for demonstration

    printf("Array elements using calloc: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr_calloc[i]);
    printf("\n");

    // Reallocating memory for arr_malloc
    n += 2; // Increasing size by 2
    arr_malloc = (int *)realloc(arr_malloc, n * sizeof(int));
    if (arr_malloc == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr_calloc); // Free previously allocated memory
        return 1;
    }

    // Initialize new elements
    for (i = n - 2; i < n; i++)
        arr_malloc[i] = i + 1;

    printf("Array elements after realloc using malloc: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr_malloc[i]);
    printf("\n");

    // Free allocated memory
    free(arr_malloc);
    free(arr_calloc);

    return 0;
}
