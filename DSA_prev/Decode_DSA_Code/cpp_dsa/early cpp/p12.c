
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int a2[5] = {2, 4, 6, 8, 10};

    for (int i = 0; i < 5; i++) {
        a[i] -= a2[i];
        printf("%d ", a[i]);
    }

    return 0;
}
