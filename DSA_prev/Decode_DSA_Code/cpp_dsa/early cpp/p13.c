#include <stdio.h>

void Arr(int arr[]) {
    for (int i = 0; i < 5; ++i) {
        arr[i] = !arr[i];
    }
}

int main() {
    int a[5] = {1, 0, 5, 3, 0};
    Arr(a);
    for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}
