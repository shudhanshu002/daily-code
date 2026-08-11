#include <stdio.h>

void printOperations(int a, int b) {
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Division: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Division: Cannot divide by zero\n");
    }
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printOperations(a, b);

    return 0;
}
///in call by value the actual arguments are copied to the formal arguments whatever the changes done in the formal arguments they are not reflected back to the actual arguments in call by
