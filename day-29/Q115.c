#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n1. Length\n2. Reverse\n3. Uppercase\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
        {
            int i;
            for(i = strlen(str)-1; i >= 0; i--)
                printf("%c", str[i]);
            break;
        }

        case 3:
        {
            int i;
            for(i = 0; str[i] != '\0'; i++) {
                if(str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
            }
            printf("%s", str);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}