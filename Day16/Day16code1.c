#include <stdio.h>

int main() {
    int num, i , remainder;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    i = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    
    if (i == reverse) {
        printf("%d  palindrome number.\n", i);
    } else {
        printf("%d not a palindrome number.\n", i);
    }

    return 0;
}
