#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            longest[len] = str[i];
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                longest[len] = '\0';
                strcpy(longest, longest);
            }
            len = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    
    char word[100];
    i = 0;
    len = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[len++] = str[i];
        } else {
            word[len] = '\0';
            if (len == maxLen) {
                strcpy(longest, word);
                break;
            }
            len = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("Longest word = %s\n", longest);
    printf("Length = %d\n", maxLen);

    return 0;
}