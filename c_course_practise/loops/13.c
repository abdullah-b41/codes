#include <stdio.h>

int main()  //* Digit frequency
{
    int a, b, digit, count = 0;
    scanf("%d%d", &a, &b);
    for (; a; a /= 10)
    {
        digit = a % 10;
        if (digit == b)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}