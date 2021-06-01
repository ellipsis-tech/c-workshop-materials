#include <stdio.h>
#include <stdbool.h>

bool cmp_string (char string1[], char string2[]) {

    // Enter your solution here

    return true;
}

int main(void) {
    {
        char string1[] = "APPLE";
        char string2[] = "APPLE";
        printf("Test 1\n");
        printf("Expected:Pass\n");
        printf("Actual  :%s\n", cmp_string(string1, string2) ? "Pass" : "Fail");
        printf("\n");
    }

    {
        char string1[] = "abcdefg";
        char string2[] = "AbcDEFg";
        printf("Test 2\n");
        printf("Expected:Fail\n");
        printf("Actual  :%s\n", cmp_string(string1, string2) ? "Pass" : "Fail");
        printf("\n");
    }

    {
        char string1[] = "X1y2Z3";
        char string2[] = "X1y2Z333";
        printf("Test 3\n");
        printf("Expected:Fail\n");
        printf("Actual  :%s\n", cmp_string(string1, string2) ? "Pass" : "Fail");
        printf("\n");
    }

    {
        char string1[] = "";
        char string2[] = "";
        printf("Test 4\n");
        printf("Expected:Pass\n");
        printf("Actual  :%s\n", cmp_string(string1, string2) ? "Pass" : "Fail");
        printf("\n");
    }
}