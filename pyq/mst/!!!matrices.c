// Write a program to take (n x m) 2-D array from user. User wants to insert a new element in this 2-D array. Ask user to input the row and column number where the new value has to be inserted. You have to insert the new value preserving the previous values i.e. new value should be inserted and all other values should be shifted one position ahead. 
#include <stdio.h>

int main() {
    int n, m, i, j, row, col, new_value;

    // Input dimensions of the array
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    // Declare a 2-D array of size (n x m) and take input from user
    int arr[n][m];
    printf("Enter the elements of the %d x %d array:\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Take input from the user: row, column, and new value
    printf("Enter the row and column to insert the new element (row and column start from 0): ");
    scanf("%d %d", &row, &col);
    printf("Enter the new value to insert: ");
    scanf("%d", &new_value);

    int total_elements = n * m;
    // Check if the location is valid
    if (row >= n || col >= m) {
        printf("Invalid location");
    }
    
    // Flatten the array to shift and insert new value
    int flatArray[total_elements + 1];  // Increase size to hold the new element
    int k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            flatArray[k++] = arr[i][j];
        }
    }

    // Calculate the position in the flattened array where the new element will be inserted
    int pos = (row - 1) * m + col - 1;

    // Shift elements one position ahead to make room for the new value
    for (k = total_elements; k > pos; k--) {
        flatArray[k] = flatArray[k - 1];
    }

    // Insert the new value
    flatArray[pos] = new_value;

    // Determine if a new row is added (based on the updated size after insertion)
    int new_total_elements = total_elements + 1;
    int new_rows = (new_total_elements + m - 1) / m;  // Calculate the new number of rows

    // Reshape and display the updated array after insertion
    printf("Updated array after insertion:\n");
    k = 0;
    for (i = 0; i < new_rows; i++) {
        for (j = 0; j < m; j++) {
            if (k < new_total_elements) {
                printf("%d ", flatArray[k++]);
            } else {
                // Fill trailing zeros in the last row if there are remaining empty slots
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}