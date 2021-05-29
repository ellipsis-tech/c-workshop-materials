#include <stdio.h>

int main() {
    int number = 5;
    do {
        printf("Enter a non-zero number: ");
        scanf("%d", &number);
    } while (number == 0);
    printf("You have entered: %d\n", number);
}