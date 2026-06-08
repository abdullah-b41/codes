#include <stdio.h>

int main(void)
{
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int a[100][100];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);
    int b[100][100];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2)
    {
        printf("Multiplication is not possible\n");
    }
    else
    {
        int product[100][100];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c1; k++)
                {
                    product[i][j] += a[i][k] * b[k][j];
                }
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }
}