//Calculate Structure Size
#include <stdio.h>

struct Student
{
    int id;
    char grade;
};

int main()
{
    printf("%d",sizeof(struct Student));
}