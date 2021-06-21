#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_balanced(char *input) {

    // Enter your solution here
    
    return false;
}


int main(void) {
    int testcase = 1;
    {
        char *input = "{[abc()]}";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "[(])";
        printf("Test %d:\n", testcase++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "[](((a(b(c())))aaaaa))";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "[]()[][]}";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "[[]]Z(Z)[Z]";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    
    {
        char *input = "[(([[]]]]";
        printf("Test %d:\n", testcase++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "[][][]]";
        printf("Test %d:\n", testcase++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = "";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    {
        char *input = " ";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }


    {
        char *input = "AAABBBCCCaaabbbccc";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }


}