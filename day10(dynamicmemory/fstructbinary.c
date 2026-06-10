#include<stdio.h>
#include<stdlib.h> 
struct student
{
int id;
char name[20];};
int main()
{
    FILE *fp;
    struct student s1={1,"John"};  
    fp=fopen("student.dat","wb");
    fwrite(&s1,sizeof(struct student),1,fp);
    fclose(fp);
    return 0;
}