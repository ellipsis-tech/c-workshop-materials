#include <stdio.h>

int main() {
    int number = 0;
    while (number == 0) {
        printf("Enter a non-zero number: ");
        scanf("%d", &number);
    }
    printf("You have entered: %d\n", number);
}