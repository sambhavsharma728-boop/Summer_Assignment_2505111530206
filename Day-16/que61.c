#include <stdio.h>

int main() {
    int n, i, expectedSum = 0, actualSum = 0, missing;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - actualSum;

    printf("Missing number = %d\n", missing);

    return 0;
}