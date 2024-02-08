// 1. WAP to find out the smallest and largest element stored in an array of n integers.
#include <stdio.h>

int main()
{

    int size;
    printf("Enter Size of Array ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter number %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }

    printf("\nSmallest %d", min);
    printf("\nLargest %d", max);
}
