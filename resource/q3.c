#include <stdio.h>


int main(void) {

    int year;
    printf("Enter year: ");
    scanf(" %d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("That's a leap year\n");
    } else {
        printf("That's not a leap year\n");
    }

}