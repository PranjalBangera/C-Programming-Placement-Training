#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int search=30;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==search)
        {
    printf("found the search value %d at the position:%d",arr[i],i);
        return 0;
    }
    }
    printf("not found");
}