#include <stdio.h>

int main() // * Total Prime divisors of n.
{
    int n, count = 0;
    scanf("%d", &n);
    for (int j = 2; j <= n; j++)
    { 
        int flag = 1;
        if (n % j == 0)
        {
            if (j != 2 && j % 2 == 0)
                flag = 0;
            else
            {
                for (int i = 3; i * i <= j; i += 2)
                {
                    if (j % i == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag)
                count++;
        }
    }
    printf("Total : %d", count);
}