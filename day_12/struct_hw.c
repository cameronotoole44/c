// create enumerated types to represent months (JAN to DEC)
// define a struct to represent a date (consists of month and day)
// write a function to print a date legibly (December 12)
// write a function that calculates the next day given a date
// test with hardcoded examples

#include <stdio.h>

// months as enum values for easy indexing and readability
typedef enum month {
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} Month;
typedef struct date {
    Month m;
    int d;
} Date;

const int daysInMonth[] = { 
    31,
    28, // non leap year
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31
};

const char* monthNames[] = {
    "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
};

void printDate(Date date) {
    printf("%s %d\n", monthNames[date.m], date.d);
}

Date nextDay(Date date) { // given a date, return the next day (or month if needed)
    Date next = date;
    if (date.d < daysInMonth[date.m]) {
        next.d += 1;
    } else {
        next.d = 1;
        next.m = (date.m + 1) % 12;
    }
    return next;
}

// test //
int main() {
    Date testDates[] = { // can be any dates, or turn into a scanf for user input
        {JAN, 1},
        {FEB, 28},
        {MAR, 14},
        {OCT, 31},
        {DEC, 31}
    };

    int numTests = sizeof(testDates) / sizeof(testDates[0]);
    for (int i = 0; i < numTests; i++) {
        printf("Current date: ");
        printDate(testDates[i]);

        Date next = nextDay(testDates[i]);
        printf("Next date   : ");
        printDate(next);
        printf("\n");
    }

    return 0;
}

