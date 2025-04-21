#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 6; /* declare and intitialize */
    double average = 0.0; /* good practice */
    char ch = 'e';

    printf("on my system\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long int is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(char));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("long double is %lu bytes.\n", sizeof(long double));
    return 0;
}

/* 
on my system
int is 4 bytes.
long int is 4 bytes.
char is 1 bytes.
float is 4 bytes.
double is 8 bytes.
long double is 16 bytes. 
*/