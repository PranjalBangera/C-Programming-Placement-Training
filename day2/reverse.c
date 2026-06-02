#include<stdio.h>
#include<limits.h>
int main()
{
    int digit;    
    int x =123;
    printf("input:   %d\n",x);
        if(x==0){
        printf("output:   0\n");
        return 0;
        }
        int reversed=0;
        int temp=x;
        while(temp !=0)
        {
        int digit = temp%10;
        temp /=10;
        }
        if(reversed > INT_MAX/10||
            (reversed== INT_MAX/10 && digit >7))
        {
            printf("output: 0 (positive overflow)\n");
            return 0;
        }
        if(reversed > INT_MAX/10|| 
            (reversed== INT_MAX/10 && digit >-8))
        {
            printf("output: 0 (negative overflow)\n");
            return 0;
        }
        reversed = reversed * 10 + digit;
    
    printf("output:%d\n", reversed);
    return 0;
}