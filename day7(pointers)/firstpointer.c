//first pointer programme
#include <stdio.h>
int main()
{
    int salary = 25000;
    int *ptr = &salary; // ptr is a pointer to an integer and it holds the address of variable age

    printf("Value of salary: = %d\n", salary); // Output: 25000
    printf("Address of salary: = %p\n", &salary); // Output: Address of salary
    printf("Value of pointer: = %p\n",ptr); // Output: Address of salary (same as above)
    printf("Deference: = %d\n", *ptr); // Output: 25000

    return 0;
}