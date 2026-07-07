#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX], marks[MAX], count = 0;
char name[MAX][50];


void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks: ");
    scanf("%d", &marks[count]);

    count++;

    printf("Student added successfully!\n");
}


void displayStudents() {
    int i;

    if(count == 0) {
        printf("No records available.\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < count; i++) {
        printf("%d\t%s\t%d\n",
               roll[i],
               name[i],
               marks[i]);
    }
}


void searchStudent() {
    int r, i, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &r);

    for(i = 0; i < count; i++) {
        if(roll[i] == r) {
            printf("\nStudent Found:\n");
            printf("Roll Number: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student not found.\n");
}


void highestMarks() {
    int i, maxIndex = 0;

    if(count == 0) {
        printf("No records available.\n");
        return;
    }

    for(i = 1; i < count; i++) {
        if(marks[i] > marks[maxIndex])
            maxIndex = i;
    }

    printf("\nTop Student:\n");
    printf("Name: %s\n", name[maxIndex]);
    printf("Marks: %d\n", marks[maxIndex]);
}


int main() {
    int choice;

    do {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Find Highest Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                highestMarks();
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}