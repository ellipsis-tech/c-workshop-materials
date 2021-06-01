#include <stdio.h>

int main(void) {
    int rows;
    printf("Number of rows:");
    scanf("%d", &rows);

    for (int i = rows ; i > 0 ; i--) {
        for (int j = 1 ; j <= rows ; j++) {
            if (j < i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}