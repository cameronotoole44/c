

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int  a = 0, b = 1, c = 2;
   
   if(a < b) printf ("TRUE\n"); else printf("FALSE\n");
   if(a < b - c) printf ("TRUE\n"); else printf("FALSE\n");   
   if(b < c - 1) printf ("TRUE\n"); else printf("FALSE\n"); 
   if(!c) printf ("TRUE\n"); else printf("FALSE\n");
     return 0;
}

/* What does the program print as a first line? */
/* What does the program print as a second line? */
/* What does the program print as a third line? */
/* What does the program print as a fourth line? */
