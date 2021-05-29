#include <stdio.h>

void print_goal(char my_goal) {
    printf("My goal is to get a %c grade! \n", my_goal);
}

int main() {
    char grade = 'A';
    print_goal(grade);
}