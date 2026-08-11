#include <stdio.h>

// Function to calculate square root using Newton's method
float squareRoot(float n) {
    float x = n;
    float root = 1;

    // Iterate until difference between x and root is less than a very small number
    while ((x - root) > 0.0001) {
        x = (x + root) / 2; // Update x to the average of x and root
        root = n / x; // Update root using the formula: root = n / x
    }

    return root;
}

int main() {
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Square root of a negative number is not defined.\n");
    } else {
        float sqrt = squareRoot(num);
        printf("Square root of %.2f = %.2f\n", num, sqrt);
    }

    return 0;
}

