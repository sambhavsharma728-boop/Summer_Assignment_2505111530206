#include <stdio.h>


int palindrome(int n)
{
    int temp, rev = 0, rem;

    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a Palindrome Number.\n", num);
    else
        printf("%d is not a Palindrome Number.\n", num);

    return 0;
}