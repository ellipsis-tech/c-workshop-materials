#include <stdio.h>

int main(void) {

    char c;
    printf("Enter a character:");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("This is an alphabet.\n");
    } else if ((c >= '0' && c <= '9')) {
        printf("This is a digit.\n");
    } else {
        printf("This is a special character.\n");
    }

}