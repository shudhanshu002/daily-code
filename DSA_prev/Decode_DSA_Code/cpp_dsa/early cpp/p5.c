#include <stdio.h>

extern int externalVariable;
extern int externalFunction(int);

int main() {
    int x = 5;

    int result = x > 3 ? x < 7 ? externalFunction(1) : externalFunction(2) : externalFunction(3);
    printf("%d", result);

    return 0;
}
int externalVariable = 10;
int externalFunction(int value) {
    return value * 2;
}
