#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int n;
    printf("Enter the number of rings: ");
    scanf("%d", &n);

    for (int i = -n + 1; i < n; i++)
    {
        for (int j = -n + 1; j < n; j++)
        {
            int distance = (abs(i) < abs(j)) ? abs(j) + 1 : abs(i) + 1;

            switch (distance % 3)
            {
            case 0:
                printf("%c ", '+');
                break;

            case 1:
                printf("%c ", '*');
                break;

            case 2:
                printf("%c ", '-');
                break;
            }
        }
        printf("\n");
    }
}
