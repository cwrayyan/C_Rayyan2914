#include <stdio.h>

int factorial_iterative(int n){
    int i = 1; 
    int fact = 1;
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact; 
}

int factorial_recursive(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factorial_recursive(n-1);
    }
}

int main(){
    int n;
    printf("Enter a number: \n ");
    scanf("%d", &n);             

    printf("\nThe output for the iterative method = %d", factorial_iterative(n));
    printf("\nThe output for the recursive method = %d", factorial_recursive(n));
}