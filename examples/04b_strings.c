#include <stdio.h>
#include <string.h>

int main() {
    char grade;
    grade = 'A';
    printf("I want to get a %c grade! \n", grade);

    // Equivalent to: char name[] = {'B', 'o', 'b', '\0'};
    char name[] = "Bob"; 
    printf("But my name is %s :( \n", name);

    // Additional code
    printf("The length of the array name is %lu\n", sizeof(name));
    printf("The string length of the array name is %lu\n", strlen(name));
}

