#include <stdio.h>

int main() {
    int itemId, quantity;
    char itemName[50];

    printf("Enter Item ID: ");
    scanf("%d", &itemId);

    printf("Enter Item Name: ");
    scanf("%s", itemName);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("\n--- Inventory Details ---\n");
    printf("Item ID: %d\n", itemId);
    printf("Item Name: %s\n", itemName);
    printf("Quantity Available: %d\n", quantity);

    return 0;
}