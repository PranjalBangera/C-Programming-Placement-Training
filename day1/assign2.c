#include <stdio.h>

int main()
{
    int a[5], target, count = 0;

    printf("Enter 4 numbers:\n");
    for(int i = 0; i < 4
        ; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    printf("Pairs are:\n");

    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if(a[i] + a[j] == target)
            {
                printf("(%d, %d)\n", a[i], a[j]);
                count++;
            }
        }
    }

    printf("Total pairs = %d", count);

    return 0;
}