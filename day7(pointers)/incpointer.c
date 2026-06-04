//increament pointer
#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // ptr points to the first element of the array

    printf("Value at ptr: %d\n", *ptr); // Output: 10
    ptr++; // Move the pointer to the next element
    printf("address = %d\n", *ptr);   // Output: 20
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("address = %d\n", *ptr);   // Output: 20
    ptr++;
    return 0;
}