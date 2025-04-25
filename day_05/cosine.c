/* Write a C program that has a function that prints a table of values for sine and cosine between (0, 1). */

/*
1. import libraries
2. start main function
3. declare variables
4. get sine and cosine between (0,1)
5. create the table
6. end program
7. check
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;
    double step = 0.1;

    printf("x\t\tsin(x)\t\tcos(x)\n");
    printf("-------------------------------------\n");

    for (x = 0.0; x <= 1.0; x += step)
    {
        double sine = sin(x);
        double cosine = cos(x);
        printf("%0.2f\t\t%0.4f\t\t%0.4f\n", x, sine, cosine);
    }

    return 0;
}
