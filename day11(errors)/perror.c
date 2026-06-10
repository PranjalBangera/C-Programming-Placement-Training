#include<stdio.h>
#include<error.h>
int main()
{
    FILE *fp;
    fp=fopen("student.txt","r");
    if(fp==NULL)
    {
        perror("Error opening file");
    }
    return 0;
}