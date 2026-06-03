//static storage class
//retains value between function calls
#include<stdio.h>
void test()
{
    static int count=0;
    count++;
    printf("%d\n,count");
}
int main()
{
    int num=10;
    test(num);
    test();
    test();
}