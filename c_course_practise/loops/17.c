#include <stdio.h> // Khatay lekh > parini
#include <math.h>

int main() //* Doubling the ODD digits.
{
    long long n, digit, num = 0, lv = 1;
    scanf("%lld", &n);
    for (; n > 0; n /= 10)
    {
        digit = n % 10;
        if (digit % 2 == 1)
        {
            num += digit * lv * 11;
            lv *= 100;
        }
        else
        {
            num += digit * lv;
            lv *= 10;
        }
        printf("%lld\n", num);
    }
    return 0;
}