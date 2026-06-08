#include<stdio.h>
 union data
 {
    int i;
    float f;

 };
int main()
{
    union data d;
    d.i = 10;
    printf("%d\n",d.i);
    d.f = 3.14;
    printf("%.2f\n",d.f);
    return 0;

}