//Banking System with Logs
#include <stdio.h>

int main() {
    FILE *log;
    int balance = 5000, deposit = 1000;

    balance += deposit;

    log = fopen("banklog.txt", "w");
    fprintf(log, "Deposited: %d\nBalance: %d", deposit, balance);
    fclose(log);

    printf("Transaction Successful");

    return 0;
}