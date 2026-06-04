#include<stdio.h>
void change(int *num)
{
    *num=100;
}
int main()
{
    int x=10;
    change(&x);
    printf("%d",x);
    return 0;
}