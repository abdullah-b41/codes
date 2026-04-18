#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        long long old[n], cnt = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%lld", &old[j]);
            if (old[j] % 2 == 1)
            {
                cnt++;
            }
        }
        printf("%lld\n", cnt);
    }
}