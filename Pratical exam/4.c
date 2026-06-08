//  qestion 4 : Write a C program that uses pointers to find the sum of two 1D arrays.

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int *p1 = arr1;
    int *p2 = arr2;
    int *p3 = sum;

    for(i = 0; i < n; i++)
    {
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    printf("\nSum Array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p3 + i));
    }

    return 0;
}