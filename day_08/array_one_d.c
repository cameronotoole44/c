#include <stdio.h>

#define SIZE 5

int main(void)
{
    int grades[SIZE] = {78, 67, 92, 83, 88};
    double sum = 0.0;

    puts("\nMy grades are:");
    for (int i = 0; i < SIZE; ++i)
        printf("%d\t", grades[i]);
    puts("\n");

    for (int i = 0; i < SIZE; ++i)
        sum += grades[i];

    printf("My average is %.2f\n", sum / SIZE);
    return 0;
}

