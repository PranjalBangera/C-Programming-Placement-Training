#include<stdio.h>
#include<assert.h>
int main()
{
    int age =20;
    assert(age > 0); // this will pass
    assert(age < 0); // this will fail and terminate the program
    printf("This line will not be executed due to assertion failure.\n");
    return 0;
}