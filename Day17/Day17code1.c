#include <stdio.h>

int main()
{
    int num, remainder;
    int binary[20], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        remainder = num % 2;
        binary[i] = remainder;
        num = num / 2;
        i++;
    }

    printf("Binary = ");

    for(i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}
