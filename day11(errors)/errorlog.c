//Error Log System
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("log.txt", "w");

    fprintf(fp, "Error: Invalid Input\n");

    fclose(fp);

    printf("Log Created");

    return 0;
}