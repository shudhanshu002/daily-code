#include <stdio.h>

int x = 5;

void func() {
    int x = 3;
    printf("%d ", x);
    {
        int x = 8;
        printf("%d ", x);
    }
}

int main() {
    func();
    printf("%d\n", x);
    return 0;
}
