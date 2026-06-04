//Recursive digit sum
#include<stdio.h>

int digitsum(int n)
{
    if(n==0)      //until it hits 0  it will run
    return 0;    // returns 0

    return (n%10)+digitsum(n/10);       
}
int main()
{
    printf("%d",digitsum(1234));
}