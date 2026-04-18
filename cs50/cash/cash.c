#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Change owed: "); // Took input
    }
    while (n <= 0);
    int ttl, c25, c10, c5, c1;
    c25 = n / 25;                            // Determining 25 coins
    c10 = (n - c25 * 25) / 10;               // Determining 10 coins
    c5 = (n - c25 * 25 - c10 * 10) / 5;      // Determining 5 coins
    c1 = (n - c25 * 25 - c10 * 10 - c5 * 5); // Determining 1 coins
    ttl = c25 + c10 + c5 + c1;               // Total coins
    printf("%d\n", ttl);
}
