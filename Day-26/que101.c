#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;   

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess > number) {
            printf("Too High!\n");
        }
        else if(guess < number) {
            printf("Too Low!\n");
        }
        else {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Number of attempts = %d\n", attempts);
        }

    } while(guess != number);

    return 0;
}