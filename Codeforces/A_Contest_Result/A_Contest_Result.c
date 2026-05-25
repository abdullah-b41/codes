#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a1[n], a2[m];
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for(int j = 0; j < m; j++)
    {
        scanf("%d", &a2[j]);
    }
    int sum = 0;
    for(int k = 0; k < m; k++)
    {
        sum += a1[a2[k]];
    }
    printf("%d", sum);
}