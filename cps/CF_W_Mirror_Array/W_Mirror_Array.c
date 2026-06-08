#include <stdio.h>

int main(void)
{
    int n,m;
    scanf("%d %d", &n, &m);
    int array[101][101];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for(int k = 0; k < n; k++)
    {
        for(int l = (m-1); l >= 0; l--)
        {
            printf("%d ", array[k][l]);
        }
        printf("\n");
    }
    return 0;
}