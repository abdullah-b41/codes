#include <stdio.h>

int main() //*** */ sum of ODD and EVEN digits !!***************************
{
    int a, digit, count = 0, sum1 = 0, sum2 = 0;
    scanf("%d", &a);
    for (int i = 1; a > 0; i++)
    {
        if (i % 2 == 1)
        {
            int odd_digit = a % 10;
            sum1 += odd_digit;
        }
        else
        {
            int even_digit = a % 10;
            sum2 += even_digit;
        }
        a /= 10;
        count++;
    }
    printf("Odd digit sum : %d\n", sum1);
    printf("Even digit sum : %d\n", sum2);
    printf("Total digits : %d\n", count);
}