#include <stdio.h>

int complete_sum_to_n
    (int n):
{
    in sum = 0;
    for( ; n > 0; n--)
        sum+=n;
    return sum;
}