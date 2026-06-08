#include <stdio.h>

int main() // Different types of matrix
{
    int n, a[100][100] = {}, b[1000] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        b[i] = a[i][i]; // diagonal elements in an array
    }

    int non_diagonal = 1;
    for (int i = 0; i < n; i++) // non diagonal are 0?
    {
        for (int j = 0; j < n; j++)
            if (a[i][j] != 0 && i != j)
                non_diagonal = 0;
    }
    if (non_diagonal)
    {
        int identity = 1, scalar = 1;
        for (int i = 0; i < n; i++) // dia elements 1?
        {
            if (b[i] != 1)
                identity = 0;
        }
        if (identity)
        {
            printf("Identity Matrix\n");
            return 0;
        }

        for (int i = 0; i < n - 1; i++) // dia elements same?
        {
            if (b[i] != b[i + 1])
                scalar = 0;
        }
        if (scalar)
        {
            printf("Scalar Matrix\n");
            return 0;
        }
        else
        {
            printf("Diagonal Matrix\n");
            return 0;
        }
    }

    int up_tri = 1, low_tri = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j && a[i][j] != 0) // lower part 0?
                up_tri = 0;
            if (i < j && a[i][j] != 0) // upper part 0?
                low_tri = 0;
        }
    }
    if (up_tri)
    {
        printf("Upper Triangle Matrix\n");
        return 0;
    }
    if (low_tri)
    {
        printf("Lower Triangle Matrix\n");
        return 0;
    }

    int right_non_diagonal = 1;
    for (int i = 0; i < n; i++) // non right dia elem 0?
    {
        for (int j = 0; j < n; j++)
            if (a[i][j] != 0 && i + j != n - 1)
                right_non_diagonal = 0;
    }
    if (right_non_diagonal)
    {
        printf("Right Diagonal Matrix\n");
        return 0;
    }

    printf("None\n");
    return 0;
}