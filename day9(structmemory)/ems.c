//employment management system
#include<stdio.h>

typedef struct 
{
    int id;
    char name[50];
    float salary;
}employee;

int main()
{
    employee emp[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter ID:");
        scanf("%d",emp[i].id);

        printf("Enter Name: ");
        scanf("%s",emp[i].salary);
    }

    printf("\nEmployee Details\n");

    for(int i=0;i<3;i++)
    {
        printf("%d %s %.2f\n",
        emp[i].id,
    emp[i].name,
emp[i].salary);
    }
    return 0;

}