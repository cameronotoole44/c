#include <stdio.h>

int main(void)
{
    char c = 'a';
    printf("c in ASCII is %d\n", c);
    printf("c the character %c\n", c);
    printf("three consecutive chars are: %c%c%c \n", c, c+1, c+2);
    printf("three bell ring chars are: %c%c%c \n", '\a', '\a', '\a');
    return 0;
}

/*
c in ASCII is 97
c the character a
three consecutive chars are: abc 
three bell ring chars are: 
*/