#include <stdio.h>

int main() {
    int number_one = 0;
    int number_two = 0;
    printf("Enter the first and second number, separated by space: ");
    scanf("%d %d", &number_one, &number_two);
    int sum = number_one + number_two;
    printf("The sum of your two numbers is %d\n", sum);
}