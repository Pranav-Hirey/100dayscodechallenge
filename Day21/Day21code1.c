#include <stdio.h>

int main()
{
    int num, first, last, digits = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    last = num % 10;

    while(temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    result = num - first * digits - last;
    result = result + last * digits + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}
