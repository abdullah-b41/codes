#include <stdio.h>

int main() // * Prime sum upto n.
{
    int n, sum = 0; // ? dependent
    scanf("%d", &n);
    for (int j = 2; j <= n; j++)
    {
        int flag = 1; // ? independent
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
            sum += j;
    }
    printf("\nTotal : %d", sum);
}