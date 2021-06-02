#include <stdio.h>

int smallest_difference (int array[], int size) {

    // Enter your solution here

    return 0;
}

int main(void) {
    {
        printf("Test 1\n");
        int values[] = {1, 20, 4, 2, 15, 3};
        printf("Expected:2\n");
        printf("Actual:%d\n", smallest_difference(values, sizeof(values) / sizeof(values[0])));
        printf("\n");
    }

    {
        printf("Test 2\n");
        int values[] = {23, 9, 43, 2, 23, 78, 90};
        printf("Expected:12\n");
        printf("Actual:%d\n", smallest_difference(values, sizeof(values) / sizeof(values[0])));
        printf("\n");
    }

    {
        printf("Test 3\n");
        int values[] = {11};
        printf("Expected:0\n");
        printf("Actual:%d\n", smallest_difference(values, sizeof(values) / sizeof(values[0])));
        printf("\n");
    }

    {
        printf("Test 4\n");
        int values[] = {};
        printf("Expected:0\n");
        printf("Actual:%d\n", smallest_difference(values, sizeof(values) / sizeof(values[0])));
        printf("\n");
    }
}