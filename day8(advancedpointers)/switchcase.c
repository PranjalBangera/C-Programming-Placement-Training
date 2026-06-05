#include<stdio.h>

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return y != 0 ? x / y : 0;
}

int main()
{
    int choice;
    printf("Enter your choice: ");
    scanf("%d",&choice);
    int a, b;
    int (*operation)(int, int) = NULL;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(choice)
    {
        case 1:
            operation = add;
            break;

        case 2:
            operation = subtract;
            break;

        case 3:
            operation = multiply;
            break;

        case 4:
            operation = divide;
            break;
        
        default:
            printf("invalid");
            return 0;
    }
    if (operation)
        printf("result=%d",operation(a,b));

    return 0;
}