// Chris Fields- IT2240- U3A1-Part 1
// 06/03/2022

#include <stdio.h>

// defines a universal variable called DAYS with a value of 7
#define DAYS 7

int main(void)
{
    // Requests user input for their hourly wage in decimal form

	printf("Enter hourly wage: ");
	float wage;
	scanf("%f", &wage);

	// Requests user input for the amount of hours in each day they worked

	printf("Enter hours for each day in the week: ");
	int i = 0;
	float hours[DAYS];
	for(i = 0; i < DAYS; i++) {
		printf("Day %d: ", i + 1);
		scanf("%f", &hours[i]);
	}

	// Creates a loop to figure how many hours were worked in a week
	float totalHours = 0;
	for(i = 0; i < DAYS; i++) {
		totalHours += hours[i];
	}

	// Calculates how many overtime hours were worked in the week, if any,
	// and figures how much overtime pay and regular pay an employee will receive

    float grossPay = 0;
	if(totalHours > 40) {
		float overtimeHours = totalHours - 40;
		grossPay += overtimeHours * wage * 1.5;
		grossPay += wage * 40;
	}
	else {
		grossPay = totalHours * wage;
	}

	// Prints the employee's gross pay to the second decimal place
	printf("Gross pay: $%.2f", grossPay);
	return 0;
}
