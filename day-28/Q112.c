#include <stdio.h>

int main() {
    char name[50];
    long long phone;

    printf("Enter Contact Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%lld", &phone);

    printf("\n--- Contact Details ---\n");
    printf("Name: %s\n", name);
    printf("Phone Number: %lld\n", phone);

    return 0;
}