//Banking System with Error Logs
#include <stdio.h>

int main() {
    FILE *log;
    int balance = 1000, withdraw = 1500;

    log = fopen("errorlog.txt", "w");

    if(withdraw > balance) {
        fprintf(log, "Error: Insufficient Balance\n");
        printf("Transaction Failed");
    }

    fclose(log);
    return 0;
}