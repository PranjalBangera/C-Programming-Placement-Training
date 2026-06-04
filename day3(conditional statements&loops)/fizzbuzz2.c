// in this the fizz comes where the multiple of 3 is there and buzz for the multiple of 5.
//and the fizzbuzz come to the 15, 30 , 45 and so on. it only prints 15 number each
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)    //n=5 runs upto 5 cycle
    {
        if(i%3==0 && i%5==0)
        printf("fizzbuzz\n");

        else if(i%3==0)
          printf("fizz\n");

        else if(i%5==0)
           printf("buzz\n");

    
           else
           printf("%d\n",i);


    }
    return 0;
}
