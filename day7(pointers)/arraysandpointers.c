#include<stdio.h>
int main()
{
    int arr[3]={10,20,30};
    printf("%s\n",*arr);
    printf("%s\n",*(arr+1));
    printf("%s\n",*(arr+2));
    return 0;
}