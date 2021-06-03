#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];
    printf("Enter the word to zigzag: ");
    scanf("%s", word);
    
    for (int i = 0; i < 2; i++) {
        printf("|");
        for (int j = 0; j < strlen(word); j++) {
            if (j % 2 == i) {
                printf("%c", word[j]);
            } else {
                printf(" ");
            }
        }
        printf("|\n");
    }
}