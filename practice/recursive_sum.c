#include <stdio.h>

int sum(int n){
    if (n == 0){
        return 0;
    }else{
        return n + sum(n-1);
    }
}

int main(){
    printf("Enter the number: \n");
    int n;
    scanf("%d", &n);

    printf("The sum uptil n is: %d", sum(n));

}