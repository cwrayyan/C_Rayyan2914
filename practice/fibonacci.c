#include <stdio.h>

void fibo(int n){
    int i = 0;
    int a,b,c;
    if(i == n){
        return;
    }
    else{
        while(i < n)
        return c = a+b;
        a = b;
        b = c;
        i++;
    }

}

int main(){
    int n;
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    printf("%d", a);
    printf("%d", b);
    printf("%d", fibo(n));
}