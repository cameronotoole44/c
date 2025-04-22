/* The following code is supposed to produce the volume of a sphere as a double but is using ints. Fix this issue. */

/*
#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 int radius;
 printf(“Enter radius:”);
 scanf(“%d”, &radius);
printf(“volume is : %d \n\n“, 4 *radius*radius*radius/3 );
return 0;
}
*/

#include <stdio.h>

#define PI 3.14159

int main(void)
{ 
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    double volume = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("Volume is: %lf\n\n", volume);

    return 0;
}