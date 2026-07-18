#include <stdio.h>

// Prints the first n numbers in the Fibonacci sequence
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printFibonacci(n);

    return 0;
}
