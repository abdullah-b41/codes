#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int value(string a);

int main(void)
{
    string a = get_string("Player 1: "); // collecting inputs
    string b = get_string("Player 2: ");
    int v1 = value(a);
    int v2 = value(b);
    if (v1 > v2) // comparing value
    {
        printf("Player 1 wins!\n");
    }
    else if (v2 > v1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int value(string a) // function for determining values
{
    int points[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                    1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; // given points
    int sum = 0;
    for (int i = 0, len = strlen(a); i < len; i++) // value calculation
    {
        if (isupper(a[i]))
        {
            sum += points[a[i] - 'A'];
        }
        else if (islower(a[i]))
        {
            sum += points[a[i] - 'a'];
        }
        else
        {
            sum += 0; // only letters are accepted
        }
    }
    return sum;
}
