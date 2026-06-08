#include <stdio.h>

int main() //* Max drop in next terms.
{
    int n;
    long long a[100000] = {}, drop = 0, max_drop = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            drop = a[i] - a[j];
            if (drop > max_drop)
                max_drop = drop;
        }
    }
    printf("%lld", max_drop);
}