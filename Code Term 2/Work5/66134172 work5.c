#include <stdio.h>

void getInput(int numbers[], int n) {
    printf("Please enter number %d number:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

void findEven(int numbers[], int n) {
    printf("Even number and position:\n");
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d at position %d\n", numbers[i], i + 1);
        }
    }
}

void findOdd(int numbers[], int n) {
    printf("Odd number and position:\n");
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d at position %d\n", numbers[i], i + 1);
        }
    }
}

void displayEvenAndPositions(int numbers[], int n) {
    printf("All even number and position:\n");
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d at position %d\n", numbers[i], i + 1);
        }
    }
}

void displayOddAndPositions(int numbers[], int n) {
    printf("All odd number and position:\n");
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d at position %d\n", numbers[i], i + 1);
        }
    }
}

int main() {
    int n;
    printf("Please enter amount of number: ");
    scanf("%d", &n);
    int numbers[n];
    getInput(numbers, n);
    findEven(numbers, n);
    findOdd(numbers, n);
    displayEvenAndPositions(numbers, n);
    displayOddAndPositions(numbers, n);

    return 0;
}