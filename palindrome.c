#include <stdio.h>

int main() {
    int n, originalN, reversedN = 0, remainder;

    printf("--- Palindrome Number Checker ---\n");
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalN = n;

    // Negative numbers are generally not considered palindromes in standard definitions
    if (n < 0) {
        printf("%d is NOT a palindrome number.\n", originalN);
        return 0;
    }

    // Reverse the digits of the number
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    // Compare original number with reversed number
    if (originalN == reversedN) {
        printf("Result: %d IS a palindrome number!\n", originalN);
    } else {
        printf("Result: %d is NOT a palindrome number.\n", originalN);
    }

    return 0;
}
