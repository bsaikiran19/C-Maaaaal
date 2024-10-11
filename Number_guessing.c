#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);
   int guesses,no_of_guesses = 0,guessed_number;

   
   
    do
    {
        printf("Guess the number:");
        scanf("%d",&guessed_number);
        if(guessed_number <randomNumber){
            printf("Lower than the random number go higher\n");
        }
        else if(guessed_number>randomNumber){
            printf("Higher than the random number go lower\n");
        }
        else{
            printf("Congratulations\n");
        }
        no_of_guesses++;
        
    } while (guessed_number!=randomNumber);
    printf(" You guessed the number in %d attempts.\n",no_of_guesses);

    return 0;
}

