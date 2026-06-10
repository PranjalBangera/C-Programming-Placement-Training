//max element usin pointers
#include <stdio.h>

int main()
{
    int a[] = {10, 25, 15, 40, 30};
    int *p = a, max = *p;

    for(int i = 1; i < 5; i++)
        if(*(p+i) > max)
            max = *(p+i);

    printf("Max = %d", max);

    return 0;
}