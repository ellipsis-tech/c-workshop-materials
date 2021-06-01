#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer:");
    scanf("%d", &num);

    //fencepost
    for (int i = 1 ; i < num ; i++) {
        if (num % i == 0) {
            printf("%d, ", i);
        }
    }

    printf("%d\n", num);
}