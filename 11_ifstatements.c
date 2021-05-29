#include <stdio.h>

int main() {
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Negative number!\n");
    }
}
