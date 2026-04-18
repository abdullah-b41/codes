#include <stdio.h>

int main() //* Union of arrays in ascending order.
{
    int n1, n2, a[100000], b[100000], f[100000] = {0}, c[200000] = {0};
    scanf("%d", &n1);

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        f[a[i]]++;
    }

    scanf("%d", &n2);

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        f[b[i]]++;
    }

    int k = 0;
    for (int i = 0; i < 100000; i++)
    {
        if (f[i] > 0)
        {
            c[k] = i;
            k++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
