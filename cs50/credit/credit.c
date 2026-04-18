#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long n; // takes input
    do
    {
        printf("Card Number: ");
        scanf("%lld", &n);
    }
    while (n < 0); // promts until positive number
    long long value = n, m = n;
    long long sum1 = 0, sum2 = 0;
    while (n > 0) // 1st digit and alternate digit sum
    {
        long long ld1 = 0;
        ld1 = n % 10;
        sum1 = sum1 + ld1;
        n = n / 100;
    }
    value = value / 10;
    while (value > 0) // 2nd to last digit sum carrier
    {
        long long ld2 = 0;
        ld2 = (value % 10) * 2;
        value = value / 100;
        if (ld2 < 10)
        {
            sum2 += ld2;
        }
        else
        {
            sum2 = sum2 + ld2 % 10 + ld2 / 10;
        }
    }
    int total = sum1 + sum2;
    if ((total % 10) != 0) // checker for last digit of sum is 0 or not
    {
        printf("INVALID\n");
    }
    else
    {
        if (((m / 100000000000000) == 51) || ((m / 100000000000000) == 52) || // mastercard checker
            ((m / 100000000000000) == 53) || ((m / 100000000000000) == 54) ||
            ((m / 100000000000000) == 55))
        {
            printf("MASTERCARD\n");
        }
        else if (((m / 1000000000000) == 4) || ((m / 1000000000000000) == 4)) // visa checker
        {
            printf("VISA\n");
        }
        else if (((m / 10000000000000) == 34) || ((m / 10000000000000) == 37)) // amex checker
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return 0;
}
