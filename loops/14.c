#include <stdio.h>

int main()  //* Finding lowest digit.
{
    int a, digit, min = 9;
    scanf("%d%d", &a);
    for (; a; a /= 10)
    {
        digit = a % 10;
        if (digit < min)
        {
            min = digit;
        }
    }
    printf("%d\n", min);
    return 0;
}