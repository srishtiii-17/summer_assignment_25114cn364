#include <stdio.h>

int main() {
    char name[50];
    int seats;
    float price, total;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("Enter Ticket Price: ");
    scanf("%f", &price);

    total = seats * price;

    printf("\n--- Ticket Details ---\n");
    printf("Customer Name: %s\n", name);
    printf("Seats Booked: %d\n", seats);
    printf("Total Amount: %.2f\n", total);

    return 0;
}