#include <stdio.h>

int main() {
    char grade;
    grade = 'A';
    printf("I want to get a %c grade! \n", grade);

    // char name[] = {'B', 'o', 'b', '\0'};
    char name[] = "Bob"; 
    printf("But my name is %s :( \n", name);

    // Additional code
    printf("The length of the name string is %lu\n", sizeof(name));
}

