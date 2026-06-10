//Employee Search System
#include <stdio.h>

struct Emp
{
    int id;
};

int main()
{
    struct Emp e={101};
    int search=101;

    if(e.id==search)
        printf("Found");
    else
        printf("Not Found");
}