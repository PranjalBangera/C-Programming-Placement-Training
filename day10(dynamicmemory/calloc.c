//Dynamic Array for 10 Students' Marks Using calloc
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *m, i;

    m = (int *)calloc(10, sizeof(int));

    printf("Enter 10 marks:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &m[i]);

    printf("Marks are:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", m[i]);

    free(m);
    return 0;
}