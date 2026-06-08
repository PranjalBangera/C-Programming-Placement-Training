#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[50];
    float cgpa;
};
int main()
{
    struct student s[2];
    s[1].id=44;
    strcpy(s1.name,"Ramitha R Shetty");
    s[1].cgpa=7.0;
    printf("%d %d\n",s1.id);
    printf("%s %s\n",s1.name);
    printf("%.2f %.2f\n",s1.cgpa);
    return 0;
}

