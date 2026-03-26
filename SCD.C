#include <stdio.h>

int main(){
    int num1;
    int num2;
    int scd;
    printf("enter the values for num1 and num2: \n");
    scanf("%d \n %d", &num1, &num2);
 
    for(int i = 2; i <= num1 && i <= num2; i++ ){
        if(num1 % i == 0 && num2 % 2 == 0){
            scd = 1;
            break;
        }
        if(scd == -1){
            printf("No common denominator");

        }else{
            printf("scd = %d", scd);
        }
    }
} 