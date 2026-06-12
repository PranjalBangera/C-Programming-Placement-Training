//Inventory Management using Files
#include <stdio.h>

int main() {
    FILE *fp;
    char item[20] = "Laptop";
    int qty = 10;

    fp = fopen("inventory.txt", "w");
    fprintf(fp, "%s %d", item, qty);
    fclose(fp);

    printf("Inventory Saved");

    return 0;
}