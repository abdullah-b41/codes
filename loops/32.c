#include <stdio.h>

int main() // * sum of digits until sum is single digit.
{
    int n;
    scanf("%d", &n);
    int sum = 0;

    for (int temp = n; temp > 0; temp /= 10)
    {
        int digit = temp % 10;
        sum += digit;
    }

    if (sum > 9)
    {
        int temp = sum;
        sum = 0;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }
    }

    printf("%d", sum);
}