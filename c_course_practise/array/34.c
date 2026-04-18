#include <stdio.h>

int main() //* Interchange rows.
{
    int n, a[100][100], r1, r2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d %d", &r1, &r2);
    r1 -= 1;
    r2 -= 1;
    for (int j = 0; j < n; j++)
    {
        int tmp = a[r1][j];
        a[r1][j] = a[r2][j];
        a[r2][j] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
//!
// int main() //* Interchange columns.
// {
//     int n, a[100][100], c1, c2;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     scanf("%d %d", &c1, &c2);
//     c1 -= 1;
//     c2 -= 1;
//     for (int i = 0; i < n; i++)
//     {
//         int tmp = a[i][c1];
//         a[i][c1] = a[i][c2];
//         a[i][c2] = tmp;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
// }
