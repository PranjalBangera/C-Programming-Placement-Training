//Richest Customer Wealth
#include <stdio.h>

int main()
{
    int a[2][3]={{1,2,3},{3,4,5}}, max=0, sum;

    for(int i=0;i<2;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
            sum+=a[i][j];

        if(sum>max) max=sum;
    }

    printf("Wealth=%d",max);
}