#include <stdio.h>

int main(){
    int choice, lcd, gcd, num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Select a choice where 1 = greatest common divisor and 2 = smallest common divisor: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            gcd = 1;
            for(int i = 2; i <=  num1; i++){
                if((num1 % i == 0) && (num2 % i == 0)){
                    gcd = i;
                }
            }
            printf("The greatest common divisor = %d", gcd);
            break;
        
        case 2:
            lcd = 1;
            for(int i = 2; i <= num1; i++){
                if((num1 % i == 0) && (num2 % i == 0)){
                    lcd = i;
                    break;
                }
            }
            printf("The lowest common divisor = %d", lcd);
            break;

        default:
            printf("Invalid input");
            break;
    }
    return 0;

}