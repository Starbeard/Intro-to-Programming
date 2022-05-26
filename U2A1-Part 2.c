// Chris Fields- IT2240- U2A1-Part 2
// 05/26/22

#include <stdio.h>
#define minTax .15
#define maxTax .20
#define overtime 1.5
main()
{
    // Defining variables

    float hourly;
    float hours;
    float pay;
    float otWorked;
    float otPay;
    float grossPay;
    float t1Tax;
    float t2Tax;
    float totalTax;
    float netPay;

    // Asks for user to input their hourly wage
    printf("\n\n\nPayroll Calculator\n");
    printf("Please enter your hourly wage in $0.00 format:\n");
    scanf(" $%f", &hourly);

    // Asks for user to input the hours worked
    printf("Please input the number of hours you\n");
    printf("worked this week (in decimal format 0.00):\n");
    scanf(" %f", &hours);


    // Here we calculate pay, including any overtime.
    if (hours > 40)
    {
        pay = hourly * 40;
        otWorked = hours - 40;
        otPay = otWorked * overtime;
        grossPay = pay + otPay;

    } else if (hours <= 40)
    {

        grossPay = hourly * hours;

    }

    // This area figures taxes. Anything over $600 will
    // be taxed at 20%, while anything $600 or under will be at 15%
    t1Tax = 600 * minTax;
    t2Tax = (grossPay - 600) * maxTax;

    if (grossPay <= 600.00)
    {


        totalTax = grossPay * minTax;

    } else if (grossPay > 600)
            {

            totalTax = t1Tax + t2Tax;

            }


           // This line figures up the net pay
            netPay = grossPay - totalTax;


    // These lines print out gross and net pay, as well as the taxes.
    printf("\nYour gross pay is: $%.2f\n", grossPay);
    printf("\nYour tax rate is 15 percent for the first $600 earned\n");
    printf("and 20 percent for anything over $600.\n");
    printf("\nYour total taxes are: $%.2f\n", totalTax);
    printf("\nYour net pay for the week is: $%.2f\n", netPay);

    return 0;

}
