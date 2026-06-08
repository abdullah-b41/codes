#include <stdio.h>

int main() //* Even row ascending, odd row descending matrix form -> O(n^2)
{
    int r, c, a[10][10] = {0}, fa[10001] = {0}, num[10000] = {0};
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            fa[a[i][j]]++;
        }
    }

    int index = 0;
    for (int i = 0; i < 10000; i++)
    {
        if (fa[i] > 0)
        {
            num[index] = i;
            index++;
        }
    }

    // index = 0;
    // for (int i = 0; i < r; i++) // My code
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = 0; j < c; j++)
    //         {
    //             a[i][j] = num[index];
    //             index++;
    //         }
    //     }
    //     else
    //     {
    //         for (int j = c - 1; j >= 0; j--)
    //         {
    //             a[i][j] = num[index];
    //             index++;
    //         }
    //     }
    // }

    index = 0;
    for (int i = 0; i < r; i++) // Abdullah bhaier, optimized.
    {
        for (int j = 0; j < c; j++)
        {
            if (i % 2 == 0)
            {
                a[i][j] = num[index];
                index++;
            }
            else
            {
                a[i][c - 1 - j] = num[index];
                index++;
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}