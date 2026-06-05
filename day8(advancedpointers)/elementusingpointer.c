    //large element using pointer
    #include<stdio.h>
    int main()
    {
        int max=*ptr;
        for(int i=1;i<n;i++)
        {
            if(*(ptr+i)>max)
            max=*(ptr+i);
        }
    }