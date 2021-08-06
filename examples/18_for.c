#include <stdio.h>

int main() {
    for (int i = 0; i < 3; i++) {
        printf("%d", i);
    }

    printf("\n");

    int nums[] = {5,4,3,999,12};
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    
}