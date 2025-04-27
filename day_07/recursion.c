#include <stdio.h>

/* works up to about 20!*/
long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

long long recursive_factorial(int n) {
    if (n <= 1)        // handles n == 0 and n == 1
        return 1;
    else
        return recursive_factorial(n - 1) * n;
}

int main(void) {
    int how_many = 0;

    printf("I want table of factorial up to n: ");
    if (scanf("%d", &how_many) != 1 || how_many < 0) {
        printf("  → Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    printf("\nIterative factorials:\n");
    for (int i = 0; i <= how_many; i++) {
        printf("%2d! = %20lld\n", i, factorial(i));
    }

    printf("\nRecursive factorials:\n");
    for (int i = 0; i <= how_many; i++) {
        printf("%2d! = %20lld\n", i, recursive_factorial(i));
    }

    return 0;
}
