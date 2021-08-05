#include <stdio.h>

int main() {

    // Declaration: <data type> <variable name>[<optional size>]
    // All valid declarations of arrays
    int arr0[10]; // contains gibberish
    int arr1[3] = {1, 2, 3};
    int arr2[] = {1, 2, 3, 4};
    int arr3[10] = {5};

    for (int i = 0; i < sizeof(arr0) / 4; i++) {
        printf("%d ", arr0[i]);
    }
    printf("\n");
    for (int i = 0; i < sizeof(arr1) / 4; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < sizeof(arr2) / 4; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    for (int i = 0; i < sizeof(arr3) / 4; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

}

