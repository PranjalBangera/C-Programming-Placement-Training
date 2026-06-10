// banking system
#include <stdio.h>
#include <time.h>

float balance = 0;

// Function to log errors
void logError(const char *message, float amount)
{
    FILE *fp = fopen("error.log", "a");

    if (fp == NULL)
    {
        perror("Error opening log file");
        return;
    }

    time_t t;
    time(&t);

    fprintf(fp, "\n%s", ctime(&t));
    fprintf(fp, "Error: %s\n", message);
    fprintf(fp, "Amount: %.2f\n", amount);
    fprintf(fp, "Balance: %.2f\n", balance);
    fprintf(fp, "------------------------\n");

    fclose(fp);
}

// Deposit function
void deposit(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid deposit amount!\n");
        logError("Invalid Deposit Amount", amount);
        return;
    }

    balance += amount;
    printf("Deposited: %.2f\n", amount);
}

// Withdraw function
void withdraw(float amount)
{
    if (amount <= 0)
    {
        printf("Invalid withdrawal amount!\n");
        logError("Invalid Withdrawal Amount", amount);
        return;
    }

    if (amount > balance)
    {
        printf("Insufficient Balance!\n");
        logError("Withdrawal Failed - Insufficient Balance", amount);
        return;
    }

    balance -= amount;
    printf("Withdrawn: %.2f\n", amount);
}

// Check balance
void checkBalance()
{
    printf("Current Balance: %.2f\n", balance);
}

int main()
{
    int choice;
    float amount;

    do
    {
        printf("\n===== BANKING SYSTEM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            deposit(amount);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            withdraw(amount);
            break;

        case 3:
            checkBalance();
            break;

        case 4:
            printf("Thank you!\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}