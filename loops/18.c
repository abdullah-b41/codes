#include <stdio.h>
#include <math.h>

int main()  //* Adding a digit before a number.
{
    int n, a, digit, num, lv = 1, count = 0;
    scanf("%d %d", &n, &a);
    num = n;
    // for (; n > 0; n /= 10)
    // {
    //     lv *= 10;
    // }
    // num = num + a * lv;

    for (; n > 0; n /= 10)
    {
        count++;
    }
    num = num + a * pow(10, count);
    printf("%d", num);
    return 0;
}