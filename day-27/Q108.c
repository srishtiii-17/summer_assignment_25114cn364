#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float percentage;

    printf("Enter marks of 3 subjects:\n");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n--- Marksheet ---\n");
    printf("Subject 1: %d\n", m1);
    printf("Subject 2: %d\n", m2);
    printf("Subject 3: %d\n", m3);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if(percentage >= 40)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}