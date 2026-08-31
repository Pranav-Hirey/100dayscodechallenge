#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    switch(operator)
    {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
            {
                printf("Result = %d", num1 / num2);
            }
            else
            {
                printf("Cannot divide by zero");
            }
            break;

        case '%':
            if(num2 != 0)
            {
                printf("Result = %d", num1 % num2);
            }
            else
            {
                printf("Cannot find remainder with zero");
            }
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
