#include <stdio.h>

// A simple program demonstrating basic input and output in C
int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello, %s! You are %d years old.\n", name, age);

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a minor.\n");
    }

    return 0;
}
