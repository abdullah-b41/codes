#include <stdio.h>

int main() //* Unique element array create
{
    int n, a[100000], fa[10000] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        fa[a[i]]++;

    int cnt = 0;

    for (int i = 0; i < 10000; i++)
    {
        if (fa[i] > 0)
        {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n%d", cnt);
}