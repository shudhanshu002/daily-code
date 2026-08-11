#include <stdio.h>

#define ROWS 3
#define COLS 3
#define DEPTH 3

// Function to input elements into a 3D array
void inputArray(int arr[ROWS][COLS][DEPTH]) {
    printf("Enter elements of the array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
}

// Function to display elements of a 3D array
void displayArray(int arr[ROWS][COLS][DEPTH]) {
    printf("The elements of the array are:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            for (int k = 0; k < DEPTH; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int arr[ROWS][COLS][DEPTH];

    // Input elements into the array
    inputArray(arr);

    // Display elements of the array
    displayArray(arr);

    return 0;
}

