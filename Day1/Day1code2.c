#include <stdio.h>

int main()
{
    int n1, n2;
    int sum, difference, product, quotient;

    printf("Enter first Number: ");
    scanf("%d", &n1);

    printf("Enter Second Number: ");
    scanf("%d", &n2);

    sum = n1 + n2;
    difference = n1 - n2;
    product = n1 * n2;
    quotient = n1 / n2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);

    return 0;
}
