#include <stdio.h>

int main() {
    printf("ASCII Values with Characters:\n");
    printf("------------------------------\n");

    // Print ASCII values from 0 to 127
    for (int i = 0; i < 128; i++) {
        printf("ASCII value of %d is '%c'\n", i, i);
    }

    return 0;
}

