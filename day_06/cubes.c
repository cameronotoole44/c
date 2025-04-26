#include <stdio.h>

double square(double);
double cube(double);

int main(void)
{
    int how_many = 0, i, j;
    printf("I want square and cube for 1 to n where n is :");

    scanf("%d", &how_many);
    printf("\n square and cubes by interval of .1\n");

    for (i = 1; i <= how_many; i++)
        for (j = 0; j < 10; j++)
            printf("\n%lf\t %lf\t%lf",
                    i + j/10.0, square(i + j/10.0), cube(i + j/10.0));

    printf("\n\n");
    return 0;                
};

double square(double x)
{return (x * x);}

double cube(double x)
{return (x * x * x);} // can have definitions before main as well- either way is correct

/*

I want square and cube for 1 to n where n is :2 // input

 square and cubes by interval of .1

1.000000         1.000000       1.000000
1.100000         1.210000       1.331000
1.200000         1.440000       1.728000
1.300000         1.690000       2.197000
1.400000         1.960000       2.744000
1.500000         2.250000       3.375000
1.600000         2.560000       4.096000
1.700000         2.890000       4.913000
1.800000         3.240000       5.832000
1.900000         3.610000       6.859000
2.000000         4.000000       8.000000
2.100000         4.410000       9.261000
2.200000         4.840000       10.648000
2.300000         5.290000       12.167000
2.400000         5.760000       13.824000
2.500000         6.250000       15.625000
2.600000         6.760000       17.576000
2.700000         7.290000       19.683000
2.800000         7.840000       21.952000
2.900000         8.410000       24.389000

*/