// function pointer
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int (*ptr)(int,int)=add; // function pointer declaration and initialization
    int result=ptr(10,20); // calling the function using the pointer
    printf("Result: %d\n",result);
    return 0;
}