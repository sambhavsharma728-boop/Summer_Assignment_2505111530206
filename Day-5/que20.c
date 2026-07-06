#include <stdio.h>

int main() {
    long long int num, largestFactor = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num % 2 == 0) {
        largestFactor = 2;
        num /= 2;
    }

    for (long long int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestFactor = i;
            num /= i;
        }
    }

    if (num > 2)
        largestFactor = num;

    printf("Largest Prime Factor = %lld\n", largestFactor);

    return 0;
}