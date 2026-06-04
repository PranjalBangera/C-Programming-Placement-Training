//first pointer programme
#include <stdio.h>
int main()
{
    int age = 20;
    int *ptr = &age; // ptr is a pointer to an integer and it holds the address of variable age

    printf("Value of age: = %d\n", age); // Output: 20
    printf("Address of age: = %p\n", (void*)&age); // Output: Address of age
    printf("Value of pointer: = %p\n", (void*)ptr); // Output: Address of age (same as above)
    printf("Deference: = %d\n", *ptr); // Output: 20

    return 0;
}