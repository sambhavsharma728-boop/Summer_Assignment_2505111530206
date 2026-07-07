#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i, choice;

    printf("===== Employee Management System =====\n");
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Add Employee Records\n");
        printf("2. Display Employee Records\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter employee details:\n");
                for(i = 0; i < n; i++) {
                    printf("\nEmployee %d\n", i + 1);

                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[i].empId);

                    printf("Enter Employee Name: ");
                    scanf("%s", emp[i].name);

                    printf("Enter Salary: ");
                    scanf("%f", &emp[i].salary);
                }
                break;

            case 2:
                printf("\nEmployee Records:\n");
                printf("ID\tName\tSalary\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n",
                           emp[i].empId,
                           emp[i].name,
                           emp[i].salary);
                }
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}