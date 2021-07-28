#include <stdio.h>

int main(void) {

    int number = 0;
    printf("Enter a number containing no more than 7 digits: ");
    scanf(" %d", &number);

    while (number > 0) {
        printf("%d", number % 10);
        number /= 10;
    }

    printf("\n");
}
