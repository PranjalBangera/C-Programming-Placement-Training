//recursion(fibonacci)
#include<stdio.h>
void printNum(int n)
{
    if(n==0)
    return;         //return when the 0==0 is satisfied.
    printf("%d",n);
    printNum(n-1);        //until then 5-1=4,4-1=3,... so on its goes until its gets to zero and the output is 54321
}
int main()
{
    printNum(5);
}