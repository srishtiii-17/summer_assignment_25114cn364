#include <stdio.h>

int main() {
    int empId[3], i;
    char empName[3][20];
    float salary[3];

    for(i = 0; i < 3; i++) {
        printf("Enter Employee ID, Name and Salary: ");
        scanf("%d %s %f", &empId[i], empName[i], &salary[i]);
    }

    printf("\nEmployee Details\n");
    for(i = 0; i < 3; i++) {
        printf("ID: %d Name: %s Salary: %.2f\n",
               empId[i], empName[i], salary[i]);
    }

    return 0;
}