#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact contact[100];
    int n, i, choice;

    printf("===== Contact Management System =====\n");

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter contact details:\n");

                for(i = 0; i < n; i++) {
                    printf("\nContact %d\n", i + 1);

                    printf("Enter Name: ");
                    scanf("%s", contact[i].name);

                    printf("Enter Phone Number: ");
                    scanf("%s", contact[i].phone);

                    printf("Enter Email: ");
                    scanf("%s", contact[i].email);
                }

                printf("Contacts added successfully!\n");
                break;

            case 2:
                printf("\nContact List:\n");
                printf("Name\tPhone\tEmail\n");

                for(i = 0; i < n; i++) {
                    printf("%s\t%s\t%s\n",
                           contact[i].name,
                           contact[i].phone,
                           contact[i].email);
                }
                break;

            case 3:
                printf("Exiting Contact Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}