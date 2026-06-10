#include <stdio.h>

struct Student
{
    int id;
    char name[20];
};

int main()
{
    struct Student s = {101, "John Doe"};

    printf("%d %s", s.id, s.name);

    return 0;
}