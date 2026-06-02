#include<stdio.h>
int fibonacci(int n)
{
    if(n<=1)     //(n =7) if n is less then 1 it will return or it will not.
    return n;        // it should return n value
    return fibonacci(n-1)+fibonacci(n-2);  // it checks the postion >>
    //(7-1)+(7-2)
    //6th postion + 5th position ......>>(1 1 2 3  5 8)
    // 8 + 5
    //= 13
}
int main()
{
    printf("%d",fibonacci(7));
    return 0;
}
