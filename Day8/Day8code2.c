#include <stdio.h>

int main()
{
    int num1, num2, num3, largest;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Enter Third Number: ");
    scanf("%d", &num3);

    if(num1 >= num2 && num1 >= num3)
    {
        largest = num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }

    printf("Largest number = %d", largest);

    return 0;
}
