#include <stdio.h>

int main() // Generate identity matrix of order n.
{
    int n, a[100][100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == j)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}