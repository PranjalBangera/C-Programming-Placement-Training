#include<stdio.h>
#include<datetimeapi.h>
int main()
{
int day = 2;
switch(day)
{
    case 1:
    printf("monday\n");
    /*no break - falls through!*/
    case 2:
    printf("tuesday\n");
    /*no break - falls through*/
    case 3:
    printf("wednesday\n");
    break;
    default:
    printf("other\n");
}
}