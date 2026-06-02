#include<stdio.h>
int main()
{
    int nums[]={2,7,11,15};
    int k;
    int target=55;
    int n=sizeof(nums)/sizeof(nums[0]);
    printf("%d \n",n);
    printf("Array:");
    for(k=0;k<n;k++)
    {
        printf("%d",nums[k]);
    }
    printf("\n");
    printf("target:%d\n",target);
    printf("---------------------------------------\n");
    // brute force method
    for(int i=0;i<n-1;i++)
    {
        for(int j=j+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                printf("found:nums of [%d]+nums[%d]=%d+%d=%d\n",i,j,nums[j],nums[j],target);
                    printf("output indices: [%d,%d]\n",i,j);
                return 0;
            }
        }
    }
        printf("no solution found.\n");
        return 0;
}
