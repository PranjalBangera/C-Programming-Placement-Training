#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
    FILE *fp = fopen("abc.txt", "r");
    if (fp == NULL) {
        printf("Error Number: %d\n", errno);
        perror("error");
    }
    return 0;
}