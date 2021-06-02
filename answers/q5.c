#include <stdio.h>

int smallest_difference (int array[], int size) {
    if (size == 0 || size == 1) {
        return 0;
    }

    int diff = 0;
    int smallest = array[0] - array[1];

    if (smallest < 0) {
        smallest = -smallest;
    }

    for (int i = 2 ; i < size ; i++) {
        diff = array[i] - array[i - 1];

        if (diff < 0) {
            diff = -diff;
        }

        if (diff < smallest) {
            smallest = diff;
        }
    }

    return smallest;
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