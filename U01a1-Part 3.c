/*
Chris Fields-IT2240-U01a1-Part 3
05/18/22 */

// This program illustrates arithmetic functions in C

#include <stdio.h>


main()
{
    // Defining integer variables
    int a = 4;
    int b = 10;
    int x = 35;
    int y = 68;
    int d = 5;
    int exSum = a + b + x + y;
    int exDiv = (a + b + x + y) / 5;

    // Adding 4 variables together
    printf("%d + %d + %d + %d = %d\n\n", a, b, x, y, exSum);
    // Dividing floating-points
    printf("(%d + %d + %d + %d) / %d = %d\n\n", a, b, x, y, d, exDiv);

    // Defining floating-point variables
    float t = 5.52, e = .33, w = 2.7, v = 90.2;
    float exMult = t * v;
    float exSub = v - (t + e + w);
    // Multiplying floating-points
    printf("%.2f * %.2f = %.2f\n\n", t, v, exMult);
    // Subtracting floating-points
    printf("%.2f - (%.2f + %.2f + %.2f) = %.2f\n", v, t, e, w, exSub);



    return 0;
}
