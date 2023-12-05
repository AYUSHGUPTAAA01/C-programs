//1).WAP to calculate the factorial of a given number using while loop.

#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (n > 0) {
            factorial *= n;
            n--;
        }
        printf("Factorial = %llu\n", factorial);
    }

    return 0;
}