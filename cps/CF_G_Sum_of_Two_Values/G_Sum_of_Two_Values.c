#include <stdio.h>

int main()
{
    long long n, x;
    scanf("%lld %lld", &n, &x);
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long need = 0, cnt = 0;
    for (long long i = 0; i < n; i++)
    {
        need = x - arr[i];
        for (long long j = 0; j < n; j++)
        {
            if (i != j && arr[j] == need)
            {
                printf("%lld %lld", i + 1, j + 1);
                cnt++;
                break;
            }
        }
        if (cnt)
            break;
    }
    if (cnt == 0)
        printf("IMPOSSIBLE");
}