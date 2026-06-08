#include <stdio.h>

int main()
{
    int n, m[100][100] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (m[i][j] != m[n - 1 - j][n - 1 - i])
            {
                flag = 0;
            }
        }
    }

    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
}