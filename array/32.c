#include <stdio.h>

int main() // Print both diagonals.
{
    int n, a[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Major diagonal: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
    }
    printf("\nMinor diagonal: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i][n - 1 - i]);
    }
}