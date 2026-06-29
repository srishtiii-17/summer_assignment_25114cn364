#include <stdio.h>

int main() {
    int arr[5], i, sum = 0, choice;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Display Array\n2. Sum of Elements\n3. Largest Element\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(i = 0; i < 5; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < 5; i++)
                sum += arr[i];
            printf("Sum = %d", sum);
            break;

        case 3:
        {
            int largest = arr[0];
            for(i = 1; i < 5; i++)
                if(arr[i] > largest)
                    largest = arr[i];

            printf("Largest = %d", largest);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}