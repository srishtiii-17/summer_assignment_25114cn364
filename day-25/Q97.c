#include <stdio.h>

int main() {
    int a[5], b[5], c[10];
    int i, j, k = 0;

    printf("Enter 5 sorted elements of first array:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter 5 sorted elements of second array:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &b[i]);

    i = j = 0;

    while(i < 5 && j < 5) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < 5)
        c[k++] = a[i++];

    while(j < 5)
        c[k++] = b[j++];

    printf("Merged Array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", c[i]);

    return 0;
}