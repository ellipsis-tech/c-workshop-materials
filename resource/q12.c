#include <stdio.h>
#include <math.h>

int jump_search(int values[], int size, int e) {

    // Enter your solution here

    return 0;
}

int main(void) {
    {
        printf("Test 1\n");
        int values[] = {1, 2, 3, 4};
        printf("Expected:2\n");
        printf("Actual:%d\n", jump_search(values, sizeof(values) / sizeof(values[0]), 3));
        printf("\n");
    }

    {
        printf("Test 2\n");
        int values[] = {5, 10, 11, 19, 29, 30, 33, 34, 40, 45, 49, 50, 53, 55, 60, 66};
        printf("Expected:9\n");
        printf("Actual:%d\n", jump_search(values, sizeof(values) / sizeof(values[0]), 45));
        printf("\n");
    }

    {
        printf("Test 3\n");
        int values[] = {};
        printf("Expected:0\n");
        printf("Actual:%d\n", jump_search(values, sizeof(values) / sizeof(values[0]), 33));
        printf("\n");
    }
}