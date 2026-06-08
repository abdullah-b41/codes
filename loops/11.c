#include <stdio.h>
#include <math.h>

int main() //** */ Inverting an integer.
{
    int n, num, digit, sum = 0, count = 0, rev = 0;
    ;
    scanf("%d", &n);
    // num = n;
    // for (; n > 0; n /= 10)   // Method 1
    // {
    //     count++;
    // }
    // for (; count > 0; count--)
    // {
    //     digit = num % 10;
    //     sum += digit * pow(10, count - 1);
    //     num /= 10;
    // }
    // printf("%d", sum);

    for (; n > 0; n /= 10) // Method 2
    {
        digit = n % 10;
        rev = rev * 10 + digit; // Not clear
    }
    printf("%d", rev);
    return 0;
}