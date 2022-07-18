#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_matching(char open, char close) {
    if ((open == '(' && close == ')') || 
        (open == '[' && close == ']') ||
        (open == '{' && close == '}')) {
        return true;
    }
    return false;
}

bool is_balanced(char *string) {

    int string_len = strlen(string);
    if (string_len == 0) {
        return true;
    }

    // Create a stack of size == length of string
    char stack[string_len];
    int top = 0;

    int i = 0;
    while (i < string_len) {
        char curr = string[i++];

        // If current is an opening bracket, push into stack
        if (curr == '(' || curr == '[' || curr == '{') {
            stack[top++] = curr;

        } else if (curr == ')' || curr == ']' || curr == '}') {

            // if stack is empty OR current does not match top of stack, return false
            if (top == 0 || !is_matching(stack[top - 1], curr)) {
                return false;
            } else {
                top--;
            }
        }
    }
    return top == 0 ? true : false;
}

int main(void) {
    int testcase = 1;

    // TEST CASE 1
    {
        char *input = "{[abc()]}";
        // { and } are not valid
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 2
    {
        char *input = "[(])";
        // Opening another bracket before closing 
        printf("Test %d:\n", testcase++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 3
    {
        char *input = "[](((a(b(c())))aaaaa))";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 4
    {
        char *input = "[]()[][]}";
        // } is not valid
        printf("Test %d:\n", testcase++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 5
    {
        char *input = "[[]]Z(Z)[Z]";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 6
    {
        char *input = "[(([[]]]]";
        printf("Test %d:\n", testcase++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 7
    {
        char *input = "[][][]]";
        printf("Test %d:\n", testcase++);
        printf("Expected:false\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 8
    {
        char *input = "";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 9
    {
        char *input = " ";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }

    // TEST CASE 10
    {
        char *input = "AAABBBCCCaaabbbccc";
        printf("Test %d:\n", testcase++);
        printf("Expected:true\n");
        printf("Actual  :%s\n", is_balanced(input) ? "true" : "false");
        printf("\n");
    }


}