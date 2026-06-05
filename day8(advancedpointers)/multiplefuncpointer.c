// multiple function pointer
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}

int multiply(int a,int b)
{
    return a*b;
}

int subtract(int a,int b)
{
    return a-b;
}
int main()
{
    int(*ptr)(int,int);
    ptr = add;
    printf("%d\n",ptr(10,20));

     
    ptr = subtract;
    printf("%d\n",ptr(10,20));

     
    ptr = multiply;
    printf("%d\n",ptr(10,20));
    return 0;
}

