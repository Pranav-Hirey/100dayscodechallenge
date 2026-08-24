#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 0)
    {
        if(num == 0)
        {
            printf("%d is Zero", num);
        }
        else
        {
            printf("%d is a Positive number", num);
        }
    }
    else
    {
        printf("%d is a Negative number", num);
    }

    return 0;
}
