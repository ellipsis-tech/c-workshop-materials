#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    
    char input[100];
    printf("Enter the string to be sorted: ");
    scanf("%s", input);

    // Get the actual length of the string
    int len = strlen(input);
    bool was_swapping_done;

    do {
        was_swapping_done = false;

        // Loop through the length of the string
        for (int i = 0; i < len - 1; i++) {
            if (input[i] > input[i+1]) {
                was_swapping_done = true;
                char temp = input[i+1];
                input[i+1] = input[i];
                input[i] = temp;
            }
        }

        // terminate if there has not been any swap (means it is sorted)
    } while (was_swapping_done);

    printf("Sorted string: %s\n", input);

}
