// GUESS THE RANDOM NUMBER GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));
    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guesses = 0;
    int guessed;
    // Print the random number
    // printf("Random Number: %d\n", randomNumber);
    do
    {
        printf("Guess the number between 1 and 100:\n");
        scanf("%d", &guessed);
        if (guessed < randomNumber)
        {
            printf("Too low! Try again.\n");
        }
        else if (guessed > randomNumber)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Correct! You've guessed the number.\n");
        }
        guesses++;

    } while (guessed != randomNumber);
    printf("Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, guesses);
    printf("Score = %d/100", 100 / guesses);
    return 0;
}