//Store Structure in File
#include <stdio.h>

struct Student {
    int id;
    char name[20];
};

int main() {
    FILE *fp;
    struct Student s = {101, "Pranjal"};

    fp = fopen("student.txt", "w");
    fprintf(fp, "%d %s", s.id, s.name);
    fclose(fp);

    printf("Data Stored");

    return 0;
}