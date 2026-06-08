#include <stdio.h>      // KHATAY LEKH
#include <math.h>

int main() //* Remove EVEN digits from number.
{
    int n, digit, num = 0, lv = 1, count = 0;
    scanf("%d", &n);
    for (; n > 0; n /= 10) // Method 1 : without any function
    {
        digit = n % 10;
        if (digit % 2 == 1)
        {
            num += digit * lv;
            lv *= 10;
        }
    }

    // for (; n > 0; n /= 10) // Method 2 : with function
    // {
    //     digit = n % 10;
    //     if (digit % 2 == 1)
    //     {
    //         num += digit * pow(10, count);
    //         count++;
    //     }
    // }
    printf("%d", num);
    return 0;
}