#include <stdio.h>

int q6a() {
    return 2 * 5 + 3 / 2 % 2 + 7;
}

int q6b() {
    int x = 5;
    return x-- + ++x - --x; // warning but valid code
}

int main(void) {
    printf("The answer to Q6a is %d\n", q6a());
    printf("The answer to Q6b is %d\n", q6b());
}