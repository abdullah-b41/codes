#include <stdio.h>

int main() //* sum of 2 arrays.
{
    int n, a[10000], b[10000], sum[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        sum[i] = a[i] + b[i];
    }

    for(int i = 0; i < n; i++)
        printf("%d ", sum[i]);
}