//dynamic employee record
#include<stdio.h>
#include<stdlib.h>


struct Employee
{
    int id;
    float salary;
};

int main()
{
    struct Employee *e;

    e = (struct Employee *)malloc(sizeof(struct Employee));

    printf("Enter ID and Salary: ");
    scanf("%d %f", &e->id, &e->salary);

    printf("ID = %d\nSalary = %.2f", e->id, e->salary);

    free(e);
    return 0;
}