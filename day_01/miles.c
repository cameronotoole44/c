//  distance of a marathon in yards //

#include <stdio.h>

int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nA marathon is %lf kilometers.\n", kilometers);
    return 0;
}


// modify to input miles and yards (like with F -> C )

