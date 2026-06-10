//Print Values using *ptr and **dptr
#include <stdio.h>

int main()
{
    int a=10;
    int *ptr=&a;
    int **dptr=&ptr;

    printf("%d %d",*ptr,**dptr);

    return 0;
}