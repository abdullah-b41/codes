#include <stdio.h>

int main() // * Prime digit counter.
{
    int n, count = 0;
    scanf("%d", &n);
    // while (n > 0)
    // {
    //     int flag = 1, digit = n % 10;
    //     if (digit != 2 && digit % 2 == 0)
    //         flag = 0;
    //     else
    //     {
    //         for (int i = 3; i * i <= digit; i += 2)
    //         {
    //             if (digit % i == 0)
    //             {
    //                 flag = 0;
    //                 break;
    //             }
    //         }
    //     }
    //     if (flag)
    //         count++;
    //     n /= 10;
    // }
    // printf("Primes : %d", count);

    while (n > 0) // * Chorai buddhi, prime digits => 2, 3, 5, 7. 
    {
        int digit = n % 10;
        if (digit == 2)
            count++;
        else if (digit == 3)
            count++;
        else if (digit == 5)
            count++;
        else if (digit == 7)
            count++;
        n /= 10;
    }
    printf("Primes : %d", count);
}