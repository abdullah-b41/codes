#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char num[6];
        scanf("%s", num);
        int sum_f = 0, sum_b = 0;
        for (int i = 0; i < 3; i++)
        {
            sum_f += num[i] - '0';
            sum_b += num[3 + i] - '0';
        }
        if (sum_f == sum_b)
            printf("Yes\n");
        else
            printf("No\n");
    }
}