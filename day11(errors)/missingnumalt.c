//brute force method
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int missingNumber(int *nums, int n) {
        for(int candidate = 0; candidate <= n; candidate++) {
            bool found = false;
            for(int i = 0; i < n; i++) {
                if(nums[i] == candidate) {
                    found = true;
                    break;
                }
            }
            if(!found) return candidate;
        }
            return -1;
        }
        int main(){
            int arr[]={3,0,1};
            int n=3;
            int result = missingNumber(arr, n);
            printf("Missing number: %d\n", result);
            return 0;
        }
    }