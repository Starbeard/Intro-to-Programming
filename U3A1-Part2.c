// Chris Fields- IT2240- U3A1-Part2
// 06/01/2022

/* This program will randomly generate a number between 1 and 20
and ask the user to guess the number. The program will keep track
of how many guesses it takes the user to make a correct guess. */

#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

main()
{

    // Defining variables
    int genNum;
    int guess;
    int guessNum = 1;
    time_t t;

    // Seeding the random generator
    srand(time(&t));

    // A generator that creates a number between 1 and 20

    genNum = (rand() % 19) + 1;

    // Creates the counter



    // Explains the purpose of the program to the user and
    // requests a guess input

    printf("\n\n***Number Guessing Game***\n\n");
    printf("A random number will be generated between 1 and 20.\n");
    printf("The program will store how many attemptes it takes ");
    printf("to guess correctly!\n\n");

    // This will create a loop to allow the user to guess until they
    // guess correctly
   do {
    printf("What do you think the number will be?\n");
    scanf(" %d", &guess);

    // Guess too high output
    if (guess > genNum)
    {
        printf("That number is a little high! Try again!");
        guessNum++;
    }
    // Guess too low output
    else if (guess < genNum)
    {
        printf("That number is a little too low! Try again!");
        guessNum++;
    }
    // Correct guess output
    else
    {
        printf("\n\nYou are correct! And it only took %d tries! Great job!", guessNum);
        break;
    }

    }

    while (guess != genNum);

    return (0);


    }
