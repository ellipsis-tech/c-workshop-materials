#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_balanced(char *input) {

    int input_len = strlen(input);

    if (input_len == 0) {
        return true;
    }

    char stack[input_len];
    stack[0] = '\0'; 
    // so that we do not need to deal with boundary case

    int stack_idx = 1;

    for (int i = 0; i < input_len; i++) {

        if (input[i] == ' ' || (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            
            // Do nothing

        } else if (input[i] == '{' || input[i] == '[' || input[i] == '(') {

            // Add to the stack
            stack[stack_idx++] = input[i];

        } else if (stack_idx == -1) {

            return false;

        } else if (input[i] == ']' && stack[stack_idx - 1] != '[') {

            return false;

        } else if (input[i] == '(' && stack[stack_idx - 1] != ')') {

            return false;

        } else {

            // Remove from the stack
            stack_idx--;

        }

    }

    return true;
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