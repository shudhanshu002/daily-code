#include <stdio.h>

int main() {
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int count = 0;

    while (count < 12 ) { // Change 13 to 12 since there are 12 elements in the matrix
        int toprow = 0, rightcol = 2, bottomrow = 3, leftcol = 0;

        // top left to right
        for (int i = leftcol; i <= rightcol && count<12; i++) {
            printf("%d ", arr[toprow][i]);
            count++;
        }
        toprow++;

        // right top to bottom
        for (int i = toprow; i <= bottomrow && count<12; i++) {
            printf("%d ", arr[i][rightcol]);
            count++;
        }
        rightcol--;

        // bottom right to left
        for (int i = rightcol; i >= leftcol && count<12; i--) {
            printf("%d ", arr[bottomrow][i]);
            count++;
        }
        bottomrow--;

        // left bottom to top
        for (int i = bottomrow; i >= toprow && count<12; i--) {
            printf("%d ", arr[i][leftcol]);
            count++;
        }
        leftcol++;
    }
    printf("\n");
    return 0;
}
