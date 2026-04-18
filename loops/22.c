#include <stdio.h>

int main() //* Harshad number => num%(sum of digits) = 0
{
    int a, sum = 0;
    scanf("%d", &a);
    int num = a;
    for (; a > 0; a /= 10)
    {
        sum += a % 10;
    }
    if (num % sum == 0)
        printf("Harshad Number");
    else
        printf("Not Harshad Number");
    return 0;
}