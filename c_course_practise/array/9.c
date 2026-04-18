#include <stdio.h>

int main() //* permutation => number of unique digit same irrespective of position
{
    int n, a[10000], b[10000], fa[1001]={}, fb[1001]={}, max = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        fa[a[i]]++;
        if (a[i] > max)
            max = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
        fb[b[i]]++;
    }

    int flag = 1;
    
    for (int i = 0; i <= max; i++)
    {
        if (fa[i] != fb[i])
            flag = 0;
    }

    if (flag)
        printf("Yes");
    else
        printf("No");
}