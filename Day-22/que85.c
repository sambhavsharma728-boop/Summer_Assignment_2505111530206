#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The string is a Palindrome.");
    else
        printf("The string is Not a Palindrome.");

    return 0;
}