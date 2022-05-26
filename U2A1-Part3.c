// Chris Fields- IT2240- U2A1-Part3
// 05/25/2022

/* This program determines cab fare based on
user input for various measurements. */

#include <stdio.h>



#define minFare 5.00
#define airportY 2.00
#define mileageCost 1.80
#define multRider .50

main()
{
    //Defining variables
    char airport;
    int riders;
    float distance;
    float fare;
    float addCosts;
    float mileage;
    float secondaryFare;
    float finalFare;

    // Determines whether the cab is going to the
    // airport, if so it incurs a $2 surcharge.
    printf("\nCab Fare Calculator\n");
    printf("\nPlease note, all fares are a minimum of $5.\n");
    printf("\nAre you going to the airport?\n");
    printf("This will add a $2 surcharge.\n");
    printf("Y or N\n");
    scanf(" %c", &airport);

    if (airport == 'y' || airport == 'Y' )
    {

        (fare = minFare + airportY);

     } else if (airport == 'n' || airport == 'N')
     {

        (fare = minFare);
     }

    // This gets input for how many riders there will be, and
    //adjusts the fare based on that number.

    printf("How many riders are traveling?\n");
    printf("A second rider is an additional $1 ");
    printf("and each additional rider is 50 cents.\n");
    scanf(" %d", &riders);

    if (riders > 1)
    {
        addCosts = riders * multRider;
        secondaryFare = fare + addCosts;
    }

    // This final calculation figures up the mileage in 1/10 of a mile
    // and applies it to the rest of the fare, giving us our final fare.

    printf("How many miles will you be traveling?\n");
    printf("Please answer in tenths (0.00 format) of a mile.\n");
    printf("Every mile is $1.80.\n");
    scanf(" %f", &mileage);




    {


    } if (secondaryFare <= minFare)
        {
            finalFare = minFare;
        } else if (secondaryFare > minFare)
        {
            finalFare = secondaryFare + (mileageCost * mileage);
        }

    // Our last statement will print the final fare.
    printf("\nYour fare is $%.2f\n", finalFare);

    return 0;


}


