#include <stdio.h>

int main()
{
    int a[100], n;
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = min = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d", min);

    return 0;
}