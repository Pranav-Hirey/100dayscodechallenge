#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Before Swapping: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swapping: num1 = %d, num2 = %d", num1, num2);

    return 0;
}
