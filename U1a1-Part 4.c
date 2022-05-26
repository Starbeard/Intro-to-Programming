/*
Chris Fields-IT2240-U1a1-Part 4
05/18/22 */

// This program asks a user to input information
// and prints it to the screen

#include <stdio.h>

main()
{
    //defining scanf variables
    char chosLett;
    int chosNum;
    float chosFloat;

    // Asks the user to input a character
    printf("Please input any single letter.\n");
    scanf(" %c", &chosLett);

    // Asks the user to input a number
    printf("Please select a whole number between 1 and 9.\n");
    scanf(" %d", &chosNum);

    // Asks the user to input a floating-point number
    printf("Finally, please pick a decimal number in a X.XX format.\n");
    scanf(" %f", &chosFloat);

    //Prints the user's input
    printf("You have selected %c, %d, and %.2f.\n", chosLett, chosNum, chosFloat);
    printf("Thank you for your input.");


    return 0;


}
