#include <stdio.h>

int main() {
    int bookId;
    char bookName[20];

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf("%s", &bookName);

    printf("\nLibrary Details\n");
    printf("Book ID = %d\n", bookId);
    printf("Book Name = %s\n", bookName);

    return 0;
}