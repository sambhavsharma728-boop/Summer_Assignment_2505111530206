#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i, choice, searchId, found;

    printf("===== Mini Employee Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter employee details:\n");

                for(i = 0; i < n; i++) {
                    printf("\nEmployee %d\n", i + 1);

                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[i].id);

                    printf("Enter Employee Name: ");
                    scanf("%s", emp[i].name);

                    printf("Enter Salary: ");
                    scanf("%f", &emp[i].salary);
                }

                printf("Employee records added successfully!\n");
                break;

            case 2:
                printf("\nEmployee Records:\n");
                printf("ID\tName\tSalary\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(emp[i].id == searchId) {
                        printf("\nEmployee Found:\n");
                        printf("ID: %d\n", emp[i].id);
                        printf("Name: %s\n", emp[i].name);
                        printf("Salary: %.2f\n", emp[i].salary);

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Employee not found.\n");

                break;

            case 4:
                printf("Exiting Employee Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}