#include <stdio.h>

int Func(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    arr[j] = -1;
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int arr[14] = {1, 2, 3, 4, 1, 2, 5, 6, 7, 3, 8, 9, 4, 10};
    int size = 14;

    int dC = Func(arr, size);

    printf( "%d", dC);

    return 0;
}
