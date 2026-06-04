//Factorial using recursion
//mathematical formula:
//n!=n*(n-1)!n! = n\times (n-1)!n!=n*(n-1)!
#include<stdio.h>
int factorial(int n)
{
     if(n==0 || n==1)
    return 1;

    return n * factorial(n-1);
}
int main()
{
    printf("%d",factorial(5));      //factorial= 5*4*3*2*1 = 120
}
