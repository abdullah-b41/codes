#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d %d", &n, &m);
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[m][1];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j] * b[j][0];
        }
        printf("%d\n", sum);
    }
}