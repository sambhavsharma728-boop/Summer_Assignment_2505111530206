#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n, i, choice, searchRoll, found;

    printf("===== Student Record System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter student details:\n");

                for(i = 0; i < n; i++) {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &roll[i]);

                    printf("Enter Name: ");
                    scanf("%s", name[i]);

                    printf("Enter Marks: ");
                    scanf("%d", &marks[i]);
                }

                printf("Records added successfully!\n");
                break;

            case 2:
                printf("\nStudent Records:\n");
                printf("Roll No\tName\tMarks\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\n",
                           roll[i],
                           name[i],
                           marks[i]);
                }
                break;

            case 3:
                printf("Enter roll number to search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(roll[i] == searchRoll) {
                        printf("\nStudent Found:\n");
                        printf("Roll No: %d\n", roll[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Marks: %d\n", marks[i]);

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Student record not found.\n");

                break;

            case 4:
                printf("Exiting Student Record System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}