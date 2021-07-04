#include <stdio.h>

int main(void)
{
    int integer3 = 3;
    int integer2 = 2;
    double double3 = 3;
    double double2 = 2;
    printf("The output of 3 divided by 2 is %d\n", (integer3 / integer2)); // 1
    printf("The output of 3 divided by 2 is %lf\n", (double3 / double2));  // 1.500000
    printf("The output of 3 divided by 2 is %lf\n", (integer3 / double2));  // 1.500000
}
