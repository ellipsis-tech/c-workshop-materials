#include <stdio.h>
#include <string.h>
int main() {
    char words[] = "hey wassup";
    printf("Array length of words: %ld\n", sizeof(words));
    printf("1st Character: %c\n", words[0]);
    printf("2nd Character: %c\n", words[1]);
    printf("Last Character: %c\n", words[strlen(words) - 1]);
}

