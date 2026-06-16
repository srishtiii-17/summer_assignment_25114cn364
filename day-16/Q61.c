#include <stdio.h>
int main() {
    int arr[4], i, sum = 0, n = 5;
    printf("Enter 4 elements (from 1 to 5 with one missing):\n");
    for(i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    printf("Missing Number = %d", total - sum);
    return 0;
}