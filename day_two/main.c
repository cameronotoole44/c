#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 0, d = 0; // initialize
    c = a - b;
    printf("a = %d, b = %d, c =%d, d =%d\n",
           a, b, c, d);
    c = b - a;
    printf("a = %d, b = %d, c =%d, d =%d\n",
           a, b, c, d);       
    c = a / b ; d = b / a;
    printf("a = %d, b = %d, c =%d, d =%d\n",
           a, b, c, d);   
    c = a % b ; d = b % a;
    printf("a = %d, b = %d, c =%d, d =%d\n",
           a, b, c, d);
    c = -a - b ; d = -b - a;
    printf("a = %d, b = %d, c =%d, d =%d\n",
           a, b, c, d);
    c = ++a + b++ ; d += 5;
    printf("a = %d, b = %d, c =%d, d =%d\n",
           a, b, c, d);
    return 0;                                  
}

/* 

> gcc main.c -o main.exe

> ./main.exe

> $ ./main.exe
a = 5, b = 7, c =-2, d =0
a = 5, b = 7, c =2, d =0
a = 5, b = 7, c =0, d =1
a = 5, b = 7, c =5, d =2
a = 5, b = 7, c =-12, d =-12
a = 6, b = 8, c =13, d =-7


*/