//Create Cleanup using goto
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File Error");
        goto cleanup;
    }

cleanup:
    if(fp)
        fclose(fp);

    return 0;
}