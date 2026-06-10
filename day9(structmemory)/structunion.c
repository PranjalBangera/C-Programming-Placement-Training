//Compare Structure and Union Memory
#include <stdio.h>

struct S{int a; char b;};
union U{int a; char b;};

int main()
{
    printf("%d %d",sizeof(struct S),sizeof(union U));
}