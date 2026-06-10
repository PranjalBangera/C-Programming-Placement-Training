//menu driven calculator using function pointers
#include <stdio.h>

int add(int a,int b){ return a+b; }

int main()
{
    int (*fp)(int,int)=add;
    printf("%d",fp(10,20));
    return 0;
}