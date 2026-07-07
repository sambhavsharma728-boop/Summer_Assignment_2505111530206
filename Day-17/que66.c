#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n1, n2, i, j, found;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Union of the arrays:\n");


    for(i = 0; i < n1; i++) {
        found = 0;
        for(j = 0; j < i; j++) {
            if(arr1[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", arr1[i]);
    }

    
    for(i = 0; i < n2; i++) {
        found = 0;

        for(j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            for(j = 0; j < i; j++) {
                if(arr2[i] == arr2[j]) {
                    found = 1;
                    break;
                }
            }
        }

        if(!found)
            printf("%d ", arr2[i]);
    }

    return 0;
}