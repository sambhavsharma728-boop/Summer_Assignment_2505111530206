#include <stdio.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int age;
    int seatNo;
};

int main() {
    struct Ticket t[100];
    int n, i, choice;

    printf("===== Ticket Booking System =====\n");

    printf("Enter number of tickets to book: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter passenger details:\n");

                for(i = 0; i < n; i++) {
                    printf("\nTicket %d\n", i + 1);

                    printf("Enter Ticket Number: ");
                    scanf("%d", &t[i].ticketNo);

                    printf("Enter Passenger Name: ");
                    scanf("%s", t[i].name);

                    printf("Enter Age: ");
                    scanf("%d", &t[i].age);

                    printf("Enter Seat Number: ");
                    scanf("%d", &t[i].seatNo);
                }

                printf("Tickets booked successfully!\n");
                break;

            case 2:
                printf("\nBooked Ticket Details:\n");
                printf("Ticket No\tName\tAge\tSeat No\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t\t%s\t%d\t%d\n",
                           t[i].ticketNo,
                           t[i].name,
                           t[i].age,
                           t[i].seatNo);
                }
                break;

            case 3:
                printf("Thank you for using the ticket booking system.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}