#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, choice;

    printf("===== Student Record Management System =====\n");
    printf("Enter the number of students: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter student details:\n");
                for(i = 0; i < n; i++) {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &s[i].rollNo);

                    printf("Enter Name: ");
                    scanf("%s", s[i].name);

                    printf("Enter Marks: ");
                    scanf("%f", &s[i].marks);
                }
                break;

            case 2:
                printf("\nStudent Records:\n");
                printf("Roll No\tName\tMarks\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n",
                           s[i].rollNo,
                           s[i].name,
                           s[i].marks);
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