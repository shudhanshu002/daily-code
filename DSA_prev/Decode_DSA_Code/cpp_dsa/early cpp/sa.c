#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    // Input dimensions of the Sudoku grid
    scanf("%d", &N);

    // Allocate memory for the Sudoku grid
    int **grid = (int **)calloc(N, sizeof(int *));
    for (int i = 0; i < N; i++) {
        grid[i] = (int *)calloc(N, sizeof(int));
    }

    // Input elements of the Sudoku grid
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    // Calculate sums of main diagonal and secondary diagonal
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < N; i++) {
        mainDiagonalSum += grid[i][i];
        secondaryDiagonalSum += grid[i][N - 1 - i];
    }

    // Compare sums and print the result
    if (mainDiagonalSum >= secondaryDiagonalSum) {
        printf("Main diagonal sum is greater.\n");
    } else {
        printf("Secondary diagonal sum is greater.\n");
    }

    // Free dynamically allocated memory
    for (int i = 0; i < N; i++) {
        free(grid[i]);
    }
    free(grid);

    return 0;
}
