#include <stdio.h>

int mystery(int x) {
    if (x > 1)
        return x + mystery(x - 1);
    else
        return x;
}

int main() {
    printf("%d", mystery(15));
    return 0;
}

