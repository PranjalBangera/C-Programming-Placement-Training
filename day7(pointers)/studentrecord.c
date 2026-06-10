//student record management using pointers
#include <stdio.h>

struct Student
{
    int id;
    float marks;
};

int main()
{
    struct Student s = {101, 85.5};
    struct Student *p = &s;

    printf("ID=%d\nMarks=%.1f", p->id, p->marks);

    return 0;
}