#include <stdio.h>

int main(void) {
    int odd = 0;
    int even = 0;
    int n;
    printf("Enter integer:");
    scanf("%d", &n);

    while (n >= 0) {
        printf("Enter integer:");
        scanf("%d", &n);
        if (n % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("No. of even numbers: %d\n", even);
    printf("No. of odd numbers: %d\n", odd);
}
