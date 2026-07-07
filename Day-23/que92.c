#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            ch = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", ch);
    printf("Frequency = %d\n", max);

    return 0;
}