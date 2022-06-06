// Chris Fields-IT2240- U3A1-Part 3
// 06/03/2022


// breakInput is the variable we will use to
// break out of our loop if we have less grades than the
// number of elements in the grades array.

#include <stdio.h>
#define breakInput -1


main()
{
    // Creating variables and defining the number
    // of elements in the array
    int grades[10];
    int student = 0;
    int i;

    // Prints basic instructions for the program
    printf("\t\tGradebook Recorder\n");
    printf("Please input grades as whole numbers\n");
    printf("Between 0 and 100 only.\n");
    printf("You may enter -1 to finish if less than 10 entries\n\n");

    /* Creates a for loop that will break if -1 is input or will
     continue until the program hits the designated number of
     array elements. For the same of expediency, I have set this
     amount to 10, but it can be changed as necessary. */
      for(i = 0; i < 10; i++)
    {   printf("Please input grade or %d to quit:\n", breakInput);
        scanf(" %d", &grades[i]);
        // If a user enters numbers lower than our breakInput variable
        // or higher than 100, the program stops
        if(grades[i] < -1 || grades[i] > 100)
        {
        printf("You have entered input that is not allowed.\n");
            printf("All grades entered must be between 0 and 100. \n");
            printf("Previous input will be printed.\n");
            break;
        }
        // This is the statement that breaks the loop if
        // -1 is input
         if(grades[i] == breakInput)
        {
            printf(" Printing-\n\n");
            break;
        }
        // Increases the student variable for every iteration
        student++;
        }
        // This section prints all of the recorded grades
         printf(" Grades: \n");

    for(i = 0; i < student; i++)
    {
        printf("\t%d\n", grades[i]);
    }
    return(0);
    }
