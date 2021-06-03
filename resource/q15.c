#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_circular(int value) {

    // Enter your solution here

    return false;
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