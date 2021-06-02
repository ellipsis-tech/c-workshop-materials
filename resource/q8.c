#include <stdio.h>
#include <stdbool.h>

bool can_split(int values[], int size) {

    // Enter your solution here

    return false;
}


int main(void) {
    {
        printf("Test 1\n");
        int values[] = {10, 3, 5, 5, 7, 3, 2, 1};
        printf("Expected:Pass\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 2\n");
        int values[] = {4, 8, 3, 2, 2, 2, 9, 1};
        printf("Expected:Fail\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 3\n");
        int values[] = {20, 30, 9, 12, 29};
        printf("Expected:Pass\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 4\n");
        int values[] = {10};
        printf("Expected:Fail\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "Pass" : "Fail");
        printf("\n");
    }

    {
        printf("Test 5\n");
        int values[] = {};
        printf("Expected:Fail\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "Pass" : "Fail");
        printf("\n");
    }
}