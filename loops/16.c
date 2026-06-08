#include <stdio.h>      // KHATAY LEKH
#include <math.h>

int main() //* Doubling the digits.
{
    int n, digit, num = 0, lv = 11; // lv = 11 why?
    scanf("%d", &n);
    for (; n > 0; n /= 10) 
    {
        digit = n % 10;
        num += digit * lv;
        lv *= 100;                  // lv = lv*100 why?
    }
    printf("%d", num);
    return 0;
}