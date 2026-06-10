//Password Validation System
#include <stdio.h>
#include <string.h>

int main()
{
    char pass[]="admin123";

    if(strlen(pass)>=8)
        printf("Valid Password");
    else
        printf("Invalid Password");

    return 0;
}