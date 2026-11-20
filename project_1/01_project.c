#include <stdio.h>
#include <stdlib.h>  // includes the standard library
#include <time.h>    // allows us to use time() for seeding

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int no_of_guesses = 0;
    int guessed_number;

    do {
        printf("Guess the number between 1 to 100: ");
        scanf("%d", &guessed_number);
        no_of_guesses++;

        if (guessed_number > randomNumber) {
            printf("Too high!\n");
        } else if (guessed_number < randomNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts\n", no_of_guesses);
        }

    } while (guessed_number = randomNumber);

    return 0;
}