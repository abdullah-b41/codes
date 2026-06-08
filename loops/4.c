#include <stdio.h>

int main(void) //* Perfect Number, sum divisors = number
{
    int a, sum = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (sum == a)
        printf("Perfect Number");
    else
        printf("Not");
    return 0;
}