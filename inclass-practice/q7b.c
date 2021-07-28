#include <stdio.h>

int main(void) {

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
    printf("Enter the first number: ");
    scanf(" %d", &num1);
    printf("Enter the second number: ");
    scanf(" %d", &num2);
    printf("Enter the third number: ");
    scanf(" %d", &num3);

    int sum = num1;

    if (num1 != num2) {
        sum += num2;
    }

    if (num1 != num3 && num2 != num3) {
        sum += num3;
    }

    printf("The sum of unique numbers is %d\n", sum);
}
