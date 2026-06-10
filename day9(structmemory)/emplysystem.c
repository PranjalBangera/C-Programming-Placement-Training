//Employee Management System
#include <stdio.h>

struct Emp
{
    int id;
    char name[20];
};

int main()
{
    struct Emp e={101,"abc"};

    printf("%d %s",e.id,e.name);
}