// 2. WAP to reverse the contents of an array of n elements.
#include <stdio.h>

int main()
{
    int size;
    printf("Enter Size of Array ");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter number %d = ", i + 1);
        scanf("%d", &arr[i]);
    }
    int rearr[size];

    for (int i = 0; i < size; i++)
    {
        rearr[i] = arr[(size - 1) - i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = rearr[i];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}