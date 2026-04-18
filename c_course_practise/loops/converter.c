#include <stdio.h>

int main() //* deci to bin,oct,hexa and bin to deci.
{
    // int n;
    // scanf("%d", &n);
    // int lv = 1;
    // while (lv <= n) //* extracting from msb to lsb
    // {
    //     lv *= 10; //* if n=189, lv=1000
    // }
    // lv /= 10; //* make lv 100
    // while (lv > 0)
    // {
    //     int digit = n / lv; //* quotient is digit, i.e 1
    //     n = n % lv; //* remainder is next digit, i.e. 89
    //     lv /= 10; //* decrease lv to 10
    //     printf("%d", digit);
    // } //* just put base instead of 10 and all set to go
    //!
    // int n;
    // scanf("%d", &n);
    // int lv = 1;
    // while (lv <= n) //* bin
    // {
    //     lv *= 2;
    // }
    // lv /= 2;
    // while (lv > 0)
    // {
    //     int digit = n / lv;
    //     n = n % lv;
    //     lv /= 2;
    //     printf("%d", digit);
    // }
    //!
    // int n;
    // scanf("%d", &n);
    // int lv = 1;
    // while (lv <= n) //* oct
    // {
    //     lv *= 8;
    // }
    // lv /= 8;
    // while (lv > 0)
    // {
    //     int digit = n / lv;
    //     n = n % lv;
    //     lv /= 8;
    //     printf("%d", digit);
    // }
    //!
    // int n;
    // scanf("%d", &n);
    // int lv = 1;
    // while (lv <= n) //* hexa
    // {
    //     lv *= 16;
    // }
    // lv /= 16;
    // while (lv > 0)
    // {
    //     int digit = n / lv;
    //     n = n % lv;
    //     lv /= 16;
    //     if (digit > 9) //* this guy has some characters so.....
    //     {
    //         printf("%c", digit % 10 + 'A'); //* 10=A, 11=B, 12=C.......
    //     }
    //     else
    //         printf("%d", digit);
    // }
    //!
    // long long n; //* it's actually a binary so long long is safe.
    // scanf("%lld", &n);
    // int lv = 1, deci = 0;
    // while (n > 0)
    // {
    //     int digit = n % 10;
    //     deci += digit * lv; //* 1101 => 1 * 2^0 + 0 * 2^1 + 1 * 2^2 + 1 * 2^3
    //     lv *= 2;
    //     n /= 10;
    //     if (digit > 1)
    //     {
    //         printf("Invalid Binary number");
    //         return 0;
    //     }
    // }
    // printf("%d", deci); //* summing them i get my deci.
}