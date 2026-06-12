//Student Database using Files
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("database.txt", "w");

    fprintf(fp, "101 monish\n");
    fprintf(fp, "102 Rahul\n");

    fclose(fp);

    printf("Student Data Saved");

    return 0;
}