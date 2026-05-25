#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int sum1=0;
    for (int i=1; i<=a; i++)
    {
        int sum2 = 0;
        for (int j=1; j<=(2*i-1); j += 2)
        {
            sum2 += j;
        }
        sum1 += i*sum2;
    }
    printf("Summation = %d", sum1);
}

