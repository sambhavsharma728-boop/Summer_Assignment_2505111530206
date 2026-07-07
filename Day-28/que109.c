#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n, i, choice;

    printf("===== Library Management System =====\n");
    printf("Enter the number of books: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Add Book Records\n");
        printf("2. Display Book Records\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter book details:\n");
                for(i = 0; i < n; i++) {
                    printf("\nBook %d\n", i + 1);

                    printf("Enter Book ID: ");
                    scanf("%d", &book[i].bookId);

                    printf("Enter Book Title: ");
                    scanf("%s", book[i].title);

                    printf("Enter Author Name: ");
                    scanf("%s", book[i].author);
                }
                break;

            case 2:
                printf("\nBook Records:\n");
                printf("ID\tTitle\tAuthor\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\n",
                           book[i].bookId,
                           book[i].title,
                           book[i].author);
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