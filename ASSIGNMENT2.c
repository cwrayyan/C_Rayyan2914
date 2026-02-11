#include <stdio.h>

int main() {
    int a, b, c;
    float d;
    char operation;

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);   // space before %c is important

    switch (operation)
    {
        case '+':
            printf("Enter two digits for calculation:\n");
            scanf("%d %d", &a, &b);
            c = a + b;
            printf("The addition is %d", c);
            break;

        case '-':
            printf("Enter two digits for calculation:\n");
            scanf("%d %d", &a, &b);
            c = a - b;
            printf("The subtraction is %d", c);
            break;

        case '*':
            printf("Enter two digits for calculation:\n");
            scanf("%d %d", &a, &b);
            c = a * b;
            printf("The multiplication is %d", c);
            break;

        case '/':
            printf("Enter dividend:\n");
            scanf("%d", &a);
            printf("Enter divisor:\n");
            scanf("%d", &b);

            if (b != 0)
            {
                d = (float)a / b;   // typecast to get proper division
                printf("The division is %f", d);
            }
            else
            {
                printf("Invalid division\n");
            }
            break;

        default:
            printf("Invalid operation");
    }

    return 0;
}
