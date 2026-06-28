#include <stdio.h>

int main() {
    int accNo;
    char name[50];
    float balance;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("\n--- Account Details ---\n");
    printf("Account Number: %d\n", accNo);
    printf("Name: %s\n", name);
    printf("Balance: %.2f\n", balance);

    return 0;
}