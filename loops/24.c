#include <stdio.h>

int main()      // * Prime? this is the least time complexity one.
{
    int n;
    scanf("%d", &n);
    int flag = 1;
    if (n <= 1)
        flag = 0;
    else if (n != 2 && n % 2 == 0)
        flag = 0;
    else
    {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        printf("Prime");
    else
        printf("Not Prime");
}