#include <stdio.h>
#include <math.h>

int main() // * Armstrong Number => num = sum of digit^(total digit number)
{
    // int n,temp, digit, count = 0, sum = 0;
    // scanf("%d", &n);
    // temp = n;

    // for (;temp>0;temp/=10)   // needed for both
    // {
    //     count++;
    // }

    // for (temp = n; temp > 0; temp /= 10)     // with function.
    // {
    //     digit = temp % 10;
    //     sum += pow(digit, count);
    // }

    // for (temp = n; temp > 0; temp /= 10) // Without function.
    // {
    //     int prod = 1;
    //     digit = num1 % 10;
    //     for (int i = 0; i < count; i++)
    //     {
    //         prod *= digit;
    //     }
    //     sum += prod;
    // }

    // if (sum == (temp=n))
    //     printf("Armstrong Number\n");
    // else
    //     printf("Not Armstrong Number\n");

    long long n;
    scanf("%lld", &n);
    for (long long i = 0; i <= n; i++) // * Generates armstrong upto n
    {
        long long digit, count = 0, sum = 0, temp = 1;

        for (temp = i; temp > 0; temp /= 10)
        {
            count++;
        }

        for (temp = i; temp > 0; temp /= 10)
        {
            long long prod = 1;
            digit = temp % 10;
            for (long long j = 0; j < count; j++)
            {
                prod *= digit;
            }
            sum += prod;
        }

        if (sum == (temp = i))
            printf("%lld\n", i);
    }
    return 0;
}