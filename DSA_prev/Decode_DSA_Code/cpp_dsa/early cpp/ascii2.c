#include <stdio.h>

int main() {
    char uppercaseLetter;
    int asciiValue;

    // Taking uppercase letter as input
    printf("Enter an UPPERCASE letter: ");
    scanf("%c", &uppercaseLetter);

    // Convert uppercase letter to ASCII value
    asciiValue = (int)uppercaseLetter;

    // Add 2 to the ASCII value
    asciiValue += 2;

    // Convert ASCII value back to character
    char resultChar = (char)asciiValue;

    // Output the result
    printf("The character after adding 2 to its ASCII value is: %c\n", resultChar);

    return 0;
}

