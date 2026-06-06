//fgets function
#include <stdio.h>
int main() 
{
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);    //size of the name is 50 

    printf("You entered: %s", name);

    return 0;
}