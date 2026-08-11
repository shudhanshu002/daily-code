#include <stdio.h>

int main() {
    static int i = 7;
    printf("%d", i++ + ++i - i--);
}
