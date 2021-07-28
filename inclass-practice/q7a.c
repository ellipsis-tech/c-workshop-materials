#include <stdio.h>

int main(void) {

    int input = 0;
    
    printf("Enter a number: ");
    scanf(" %d", &input);

    if (input % 4 == 0) {
        printf("Polar");
    }

    if (input % 9 == 0 ) {
        printf("Bear");
    }

    if (input % 4 != 0 && input % 9 != 0) {
        printf("%d", input);
    }

    printf("\n");
}
