#include<stdio.h>
int main()
{
    int ogn,rsn=0, remainder,tn;
printf("enter an integer:");
scanf("%d, &ogn");
tn=ogn;
while (tn>0){
    remainder = tn %10;
    rsn = rsn * 10 + remainder;
    tn/=10;
}
if (ogn==rsn)
{
    printf("%d is a palindrome number.",ogn);
}
else
{
    printf("%d is not a palindrome number.",ogn);
}
return 0;
}
