#include <stdio.h>

int main() {
    int arr[100], n, choice, i, element, pos, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== Array Operations Menu =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &element);

                printf("Enter position: ");
                scanf("%d", &pos);

                if(pos >= 0 && pos <= n) {
                    for(i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = element;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                else {
                    printf("Invalid position.\n");
                }
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos >= 0 && pos < n) {
                    for(i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                }
                else {
                    printf("Invalid position.\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &element);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(arr[i] == element) {
                        printf("Element found at position %d\n", i);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Element not found.\n");

                break;

            case 5:
                printf("Exiting Array Operations System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}