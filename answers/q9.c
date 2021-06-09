#include <stdio.h>

#define SIZE_ONE 1
#define SIZE_SIX 6
#define SIZE_TEN 10
#define SIZE_FIFTEEN 15

void segregate(int values[], int length) {
    int counter = 0;

    //counts the number of 0s in array
    for (int i = 0 ; i < length ; i++) {
        if (values[i] == 0) {
            counter++;
        }
    }

    for (int i = 0 ; i < counter ; i++) {
        values[i] = 0;
    }

    for (int j = counter ; j < length ; j++) {
        values[j] = 1;
    }
}

void print_array(int values[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main(void) {
    {
        printf("Test 1\n");
        int values[SIZE_FIFTEEN] = {0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0};
        printf("Before  :");
        print_array(values, SIZE_FIFTEEN);
        printf("After   :");
        segregate(values, SIZE_FIFTEEN);
        print_array(values, SIZE_FIFTEEN);
        printf("Expected:0 0 0 0 0 0 0 0 1 1 1 1 1 1 1\n\n");
    }

    {
        printf("Test 2\n");
        int values[SIZE_TEN] = {0, 1, 0, 1, 0, 1, 1, 0, 0, 1};
        printf("Before  :");
        print_array(values, SIZE_TEN);
        printf("After   :");
        segregate(values, SIZE_TEN);
        print_array(values, SIZE_TEN);
        printf("Expected:0 0 0 0 0 1 1 1 1 1\n\n");
    }

    {
        printf("Test 3\n");
        int values[SIZE_SIX] = {0, 0, 1, 0, 0, 0};
        printf("Before  :");
        print_array(values, SIZE_SIX);
        printf("After   :");
        segregate(values, SIZE_SIX);
        print_array(values, SIZE_SIX);
        printf("Expected:0 0 0 0 0 1\n\n");
    }

        {
        printf("Test 4\n");
        int values[SIZE_ONE] = {1};
        printf("Before  :");
        print_array(values, SIZE_ONE);
        printf("After   :");
        segregate(values, SIZE_ONE);
        print_array(values, SIZE_ONE);
        printf("Expected:1\n\n");
    }
}