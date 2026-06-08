#include <stdio.h>

int main() // * Strong Number => sum of factorial of digits = num
{
    int n, digit, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
    for (; temp > 0; temp /= 10)
    {
        digit = temp % 10;
        int prod = 1;
        for (int i = 1; i <= digit; i++)
        {
            prod *= i;
        }
        sum += prod;
    }
    if (sum == n)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }
    return 0;
}