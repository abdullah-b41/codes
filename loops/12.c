#include <stdio.h>
#include <math.h>

int main() //* Exchange first and last digits.
{
    int n, num, last_digit, first_digit, count = 0, lv = 1;
    scanf("%d", &n);
    num = n;
    // for (; n > 0; n /= 10)   // Method 1 : with function
    // {
    //     count++;
    // }
    // last_digit = num % 10;
    // first_digit = num / pow(10, count - 1);
    // num = num - (last_digit - first_digit) + (last_digit - first_digit) * pow(10, count - 1);

    for (; n > 0; n /= 10)      // Method 2 : without any function
    {
        lv *= 10;
    }
    last_digit = num % 10;
    first_digit = num / (lv / 10);
    num = num - (last_digit - first_digit) + (last_digit - first_digit) * (lv / 10);
    printf("%d", num);
    return 0;
}