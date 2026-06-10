// remove duplicate array
#include<stdio.h>
int main()
{
    int arr[]={1,1,2,2,3,4,4};
    int n=7;
    int j=0;
    for(int i=1;i<n;i++)
    {
    if(arr[i]!=arr[j])
    {printf("After Removing Duplicates: %d\n",arr[i]);
}
return 0;


}}