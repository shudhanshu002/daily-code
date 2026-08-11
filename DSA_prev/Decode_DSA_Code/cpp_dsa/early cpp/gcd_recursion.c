
#include <stdio.h>

int gcd(int x, int y) {
    if (y == 0) {  // Use == for comparison
        return x;
    }
    return gcd(y, x % y);
}

int main() {
    printf("%d", gcd(6, 16));  // Added format specifier for printf
    return 0;  // Added return statement
}
