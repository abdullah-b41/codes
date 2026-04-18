#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: "); // Took height as an integer that reject non integer,
                                 // blanks, 0 and negatives
    }
    while (n <= 0);
    for (int i = 1; i <= n; i++) // Row counter
    {
        for (int k = 0; k < (n - i); k++) // Space printer
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++) // Hash priter
        {
            printf("#");
        }
        printf("\n"); // Moves to next line
    }
}
