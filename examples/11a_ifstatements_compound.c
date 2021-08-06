#include <stdio.h>

int main() {
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    // This is run if ANY of the 2 conditions are true
    if (number < 0 || number > 5) {
        printf("Weird number!\n");
    }

    // This is run if ALL of the 2 conditions are true
    if (number >= 0 && number <= 5) {
        printf("Normal number!\n");
    }
}
