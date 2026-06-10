//create a dynamic array, increase its size using realloc(), store new values and print all elements. 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a, i;

    a = (int *)malloc(3 * sizeof(int));

    for(i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    a = (int *)realloc(a, 5 * sizeof(int));

    for(i = 3; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    free(a);
    return 0;
}