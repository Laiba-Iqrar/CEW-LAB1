#include <stdio.h>

int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n) {
    int i;

    printf("Fibonacci series up to %d terms: ", n);

    for (i = 0; i < n; i++) {
        printf("%d", fibonacci(i));

        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printFibonacciSeries(n);

    return 0;
}
