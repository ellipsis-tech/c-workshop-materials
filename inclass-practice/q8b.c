#include <stdio.h>

int main(void) {

    int breadth = 0;
    printf("Enter the breadth of the rectangle to be printed out: ");
    scanf(" %d", &breadth);

    for (int i = 0; i < breadth; i += 1) {
        for (int j = 0; j < breadth * 2; j += 1) {
            printf("/");
        }
        printf("\n");
    }
}
