#include <stdio.h>

int main() //* Sparse matrix -> most elements are 0.
{
    int r, c, a[100][100], b[1000] = {}, cnt = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            b[a[i][j]]++;
            if (a[i][j] == 0)
                cnt++;
        }
    }
    if (cnt > r * c / 2)
    {
        printf("Matrix is sparse\n");
        printf("Non-Zero elements: ");
        for (int i = 1; i < 1000; i++)
        {
            if (b[i] > 0)
            {
                printf("%d ", i);
            }
        }
        printf("\nTotal non-zero elements: %d\n", r * c - cnt);
    }
    else
        printf("Matrix is not sparse\n");
}