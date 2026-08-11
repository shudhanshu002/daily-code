#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Input two integers and an operator
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter an operator (+, -, *): ");
    scanf(" %c", &op);

    // Perform operation based on the operator
    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

