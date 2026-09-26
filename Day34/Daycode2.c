#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    secondLargest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element = %d", secondLargest);

    return 0;
}
