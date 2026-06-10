#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp = NULL;
    int *ptr = NULL;

    fp= fopen("abc.txt", "r");
    if(fp==NULL)goto cleanup;

    ptr = (int*)malloc(100);
    if(ptr==NULL)goto cleanup;

    cleanup:
    if(fp)fclose(fp);
    if(ptr)free(ptr);
}