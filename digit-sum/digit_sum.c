#include <stdio.h>

// Calculates the sum of digits of a given integer
int sumOfDigits(int num) {
    int sum = 0;

    // Work with the absolute value in case of negative input
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);
    printf("The sum of digits is: %d\n", result);

    return 0;
}
