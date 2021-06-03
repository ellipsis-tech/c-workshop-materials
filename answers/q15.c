#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int number) {
    for (int i = 2 ; i < number ; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

bool is_circular(int value) {
    if (value == 0 || value == 1) {
        return false;
    }

    int num = value;
    int temp = value;
    int ctr = 0;

    //counts the no. of rotations of the value that needs to be checked for prime number
    while (temp > 0) {
        temp %= 10;
        temp /= 10;
        ctr++;
    }

    for (int i = 0 ; i < ctr ; i++) {
        if (!is_prime(num)) {
            return false;
        }

        int rem = num % 10;
        num /= 10;
        num += (rem * pow(10, ctr - 1));
    }
    return true;
}

int main(void) {
    {
        printf("Test 1\n");
        int value = 113;
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_circular(value) ? "true" : "false");
        printf("\n");
    }

    {
        printf("Test 2\n");
        int value = 200;
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_circular(value) ? "true" : "false");
        printf("\n");
    }

    {
        printf("Test 3\n");
        int value = 199933;
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_circular(value) ? "true" : "false");
        printf("\n");
    }

    {
        printf("Test 4\n");
        int value = 0;
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_circular(value) ? "true" : "false");
        printf("\n");
    }
}