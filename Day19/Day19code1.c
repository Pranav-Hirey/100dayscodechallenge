#include <stdio.h>

int main()
{
    int num1, num2, i, lcm;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    for(i = 1; i <= num1 * num2; i++)
    {
        if(i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}
