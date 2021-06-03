#include <stdio.h>
#include <stdbool.h>

bool can_split(int values[], int size) {
    if (size == 0 || size == 1) {
        return false;
    }

    //checks whether the left side equals to the right side of the splitting at every position
    for (int i = 0 ; i < size ; i++) {
        int left = 0;
        int right = 0;

        for (int j = 0 ; j < size ; j++) {
            if (j < i) {
                left += values[j];
            } else {
                right += values[j];
            }
        }

        if (left == right) {
            return true;
        }
    }

    return false;
}


int main(void) {
    {
        printf("Test 1\n");
        int values[] = {10, 3, 5, 5, 7, 3, 2, 1};
        printf("Expected:true\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "true" : "false");
        printf("\n");
    }

    {
        printf("Test 2\n");
        int values[] = {4, 8, 3, 2, 2, 2, 9, 1};
        printf("Expected:false\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "true" : "false");
        printf("\n");
    }

    {
        printf("Test 3\n");
        int values[] = {20, 30, 9, 12, 29};
        printf("Expected:true\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "true" : "false");
        printf("\n");
    }

    {
        printf("Test 4\n");
        int values[] = {10};
        printf("Expected:false\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "true" : "false");
        printf("\n");
    }

    {
        printf("Test 5\n");
        int values[] = {};
        printf("Expected:false\n");
        printf("Actual  :%s\n", can_split(values, sizeof(values) / sizeof(values[0])) ? "true" : "false");
        printf("\n");
    }
}