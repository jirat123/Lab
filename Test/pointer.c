#include <stdio.h>

struct Account {
    char accountNumber[11];
    int accountType;
    float balance;
    float creditLimit; // current money's customer
};

struct Customer {
    int customerID;
    char firstName[50];
    char lastName[50];
    struct Account accounts[10];
    int numAccounts;
};

int main() {
    struct Customer customers[100];
    int numCustomers = 0;
    int maxCustomers = 10; // set max customer
    printf("Each customer must no more than 10 accounts\n");

    while (numCustomers < maxCustomers) {
        printf("Enter customer first name (or '!' to stop): ");
        scanf("%s", customers[numCustomers].firstName);

        if (customers[numCustomers].firstName[0] == '!') {
            break;
        }

        printf("Enter customer last name: ");
        scanf("%s", customers[numCustomers].lastName);

        customers[numCustomers].customerID = numCustomers + 1;
        customers[numCustomers].numAccounts = 0;
        for (int i = 0; i < 10; i++) {
            printf("Enter account number for customer %d (or '!' to stop): ", numCustomers + 1);
            scanf("%s", customers[numCustomers].accounts[i].accountNumber);
            if (customers[numCustomers].accounts[i].accountNumber[0] == '!') {
                break;
            }
            printf("Enter account type (1 for Savings, 2 for Current): ");
            scanf("%d", &customers[numCustomers].accounts[i].accountType);

            printf("Enter initial balance: ");
            scanf("%f", &customers[numCustomers].accounts[i].balance);

            if (customers[numCustomers].accounts[i].accountType == 2) {
                printf("Enter credit limit: ");
                scanf("%f", &customers[numCustomers].accounts[i].creditLimit);
            }

            // Increase the amount of customers
            customers[numCustomers].numAccounts++;
        }

        numCustomers++;
    }
    for (int i = 0; i < numCustomers; i++) {
        for (int j = 0; j < customers[i].numAccounts; j++) {
            customers[i].accounts[j].balance += 1000.0; // Example deposit
            if (customers[i].accounts[j].accountType == 2) {
                if (2000.0 <= customers[i].accounts[j].balance + customers[i].accounts[j].creditLimit) {
                    customers[i].accounts[j].balance -= 2000.0; // Example withdrawal
                }
            }
        }
    }

    //printf
    for (int i = 0; i < numCustomers; i++) {
        printf("Customer ID: %d\n", customers[i].customerID);
        printf("Name: %s %s\n", customers[i].firstName, customers[i].lastName);
        printf("Accounts:\n");

        for (int j = 0; j < customers[i].numAccounts; j++) {
            struct Account account = customers[i].accounts[j];
            printf("- Account Number: %s\n", account.accountNumber);
            printf("- Account Type: %s\n", account.accountType == 1 ? "Savings" : "Current");
            printf("- Balance: %.2f THB\n", account.balance);

            if (account.accountType == 2) {
                printf("- Credit Limit: %.2f THB\n", account.creditLimit);
            }
            printf("\n");
        }
    }

    return 0;
}