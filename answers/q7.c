#include <stdio.h>
#include <stdbool.h>

bool cmp_string (char string1[], char string2[]) {
    int i = 0;
    int j = 0;
    int length1 = 0;
    int length2 = 0;

    //length of first string
    while (string1[i] != '\0') {
        length1++;
        i++;
    }

    //length of second string
    while (string2[j] != '\0') {
        length2++;
        j++;
    }

    //compares the lengths of both strings
    if (length1 != length2) {
        return false;
    }

    //compares the content of both strings
    for (int k = 0 ; k < length1 ; k++) {
        if (string1[k] != string2[k]) {
            return false;
        }
    }
    return true;
}

int main(void) {
    {
        char string1[] = "APPLE";
        char string2[] = "APPLE";
        printf("Test 1\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", cmp_string(string1, string2) ? "true" : "false");
        printf("\n");
    }

    {
        char string1[] = "abcdefg";
        char string2[] = "AbcDEFg";
        printf("Test 2\n");
        printf("Expected:false\n");
        printf("Actual  :%s\n", cmp_string(string1, string2) ? "true" : "false");
        printf("\n");
    }

    {
        char string1[] = "X1y2Z3";
        char string2[] = "X1y2Z333";
        printf("Test 3\n");
        printf("Expected:false\n");
        printf("Actual  :%s\n", cmp_string(string1, string2) ? "true" : "false");
        printf("\n");
    }

    {
        char string1[] = "";
        char string2[] = "";
        printf("Test 4\n");
        printf("Expected:true\n");
        printf("Actual  :%s\n", cmp_string(string1, string2) ? "true" : "false");
        printf("\n");
    }
}