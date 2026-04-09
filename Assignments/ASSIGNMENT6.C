#include <stdio.h>

// Without recursion
int factorial_iterative(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// With recursion
int factorial_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nFactorial (Iterative) = %d", factorial_iterative(n));
    printf("\nFactorial (Recursive) = %d", factorial_recursive(n));

    return 0;
}