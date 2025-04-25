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


// x               sin(x)          cos(x)
// -------------------------------------
// 0.00            0.0000          1.0000
// 0.10            0.0998          0.9950
// 0.20            0.1987          0.9801
// 0.30            0.2955          0.9553
// 0.40            0.3894          0.9211
// 0.50            0.4794          0.8776
// 0.60            0.5646          0.8253
// 0.70            0.6442          0.7648
// 0.80            0.7174          0.6967
// 0.90            0.7833          0.6216
// 1.00            0.8415          0.5403