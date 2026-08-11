
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, x;
    // Input number of rows and columns
    scanf("%d %d", &m, &n);

    // Allocate memory for the matrix
    int **matrix = (int **)malloc(m * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input matrix elements
    for (int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input threshold value
    scanf("%d", &x);

    // Calculate row sums and remove rows exceeding threshold
    int *row_sums = (int *)malloc(m * sizeof(int));
    int new_m = 0; // New number of rows
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        if (sum <= x) {
            row_sums[new_m++] = sum;
        } else {
            free(matrix[i]);
        }
    }

    // Resize the matrix
    matrix = (int **)realloc(matrix, new_m * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Display the modified matrix
    for (int i = 0; i < new_m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < new_m; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(row_sums);

    return 0;
}
