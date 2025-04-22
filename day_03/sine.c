/*  Write a program that can give the sine of a value between 0 and 1 (non inclusive). You will be graded based on whether the program can output a value in the correct range and whether your code is well-formatted and logically correct. */



/*
1. import needed libraries
2. start main function
3. declare variables
4. ask for user input on the vaule
5. read value
6. check if value is greater than 0 and less than 1
                            - yes; calculate sine and print
                            - no; print error message
7. end the program                            
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;

    printf("enter a number between 0 and 1(not including 0 or 1): ");
    scanf("%lf", &x);

    if ( x > 0 && x < 1) {
        double result = sin(x);
        printf("the sine of %.2lf is %.5lf\n", x, result);
    } else {
        printf("invalid input. please enter a value strictly between 0 and 1.\n");
    }
    return 0;
}