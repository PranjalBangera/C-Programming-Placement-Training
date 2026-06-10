#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[]={0,1,3,4};
    int n=4;
    int expected=n *(n+1)/2;
    int actual=0;
    for(int i=0;i<n;i++)
    {
        actual+=arr[i];
    printf("Missing number is: %d", expected-actual);
    }
    return 0;
}