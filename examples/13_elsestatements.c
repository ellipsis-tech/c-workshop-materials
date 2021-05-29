#include <stdio.h>

int main() {
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Negative number!\n");
    } else if (number % 10 == 0) {
        printf("Number is multiple of 10!\n");
    } else {
        printf("No conditions were met :(\n");
    }
}