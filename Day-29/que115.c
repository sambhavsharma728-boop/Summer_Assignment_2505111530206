#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice, length;

    do {
        printf("\n===== String Operations Menu =====\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);

                length = strlen(str1);
                printf("Length of string = %d\n", length);
                break;

            case 2:
                printf("Enter a string: ");
                scanf("%s", str1);

                strcpy(str2, str1);
                printf("Copied string = %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);

                printf("Enter second string: ");
                scanf("%s", str2);

                strcpy(result, str1);
                strcat(result, str2);

                printf("Concatenated string = %s\n", result);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);

                printf("Enter second string: ");
                scanf("%s", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");

                break;

            case 5:
                printf("Enter a string: ");
                scanf("%s", str1);

                strrev(str1);

                printf("Reversed string = %s\n", str1);
                break;

            case 6:
                printf("Exiting String Operations System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}
