#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[100];
    int n, i, choice;

    printf("===== Inventory Management System =====\n");

    printf("Enter number of products: ");
    scanf("%d", &n);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Update Quantity\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter product details:\n");

                for(i = 0; i < n; i++) {
                    printf("\nProduct %d\n", i + 1);

                    printf("Enter Product ID: ");
                    scanf("%d", &p[i].id);

                    printf("Enter Product Name: ");
                    scanf("%s", p[i].name);

                    printf("Enter Quantity: ");
                    scanf("%d", &p[i].quantity);

                    printf("Enter Price: ");
                    scanf("%f", &p[i].price);
                }

                printf("Products added successfully!\n");
                break;

            case 2:
                printf("\nProduct Details:\n");
                printf("ID\tName\tQuantity\tPrice\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t\t%.2f\n",
                           p[i].id,
                           p[i].name,
                           p[i].quantity,
                           p[i].price);
                }
                break;

            case 3:
                {
                    int id, qty, found = 0;

                    printf("Enter Product ID to update quantity: ");
                    scanf("%d", &id);

                    for(i = 0; i < n; i++) {
                        if(p[i].id == id) {
                            printf("Enter new quantity: ");
                            scanf("%d", &qty);

                            p[i].quantity = qty;
                            found = 1;

                            printf("Quantity updated successfully.\n");
                            break;
                        }
                    }

                    if(!found)
                        printf("Product not found.\n");
                }
                break;

            case 4:
                printf("Exiting Inventory Management System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}