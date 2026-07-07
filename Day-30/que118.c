#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;
};

int main() {
    struct Book book[100];
    int n, i, choice, searchId, found;

    printf("===== Mini Library System =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter book details:\n");

                for(i = 0; i < n; i++) {
                    printf("\nBook %d\n", i + 1);

                    printf("Enter Book ID: ");
                    scanf("%d", &book[i].id);

                    printf("Enter Book Title: ");
                    scanf("%s", book[i].title);

                    printf("Enter Author Name: ");
                    scanf("%s", book[i].author);

                    book[i].issued = 0;
                }

                printf("Books added successfully!\n");
                break;

            case 2:
                printf("\nBook Records:\n");
                printf("ID\tTitle\tAuthor\tStatus\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\t",
                           book[i].id,
                           book[i].title,
                           book[i].author);

                    if(book[i].issued == 1)
                        printf("Issued\n");
                    else
                        printf("Available\n");
                }
                break;

            case 3:
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(book[i].id == searchId) {
                        if(book[i].issued == 0) {
                            book[i].issued = 1;
                            printf("Book issued successfully.\n");
                        }
                        else {
                            printf("Book is already issued.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("Enter Book ID to return: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(book[i].id == searchId) {
                        book[i].issued = 0;
                        printf("Book returned successfully.\n");

                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book not found.\n");

                break;

            case 5:
                printf("Exiting Library System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}