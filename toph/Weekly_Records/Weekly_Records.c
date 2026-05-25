#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n * 7], total[n];

    for (int j = 0; j < (7 * n); j++)
    {
        scanf("%d", &array[j]);
    }

    for (int i = 0; i < n; i++)
    {
        total[i] = 0;
        for (int j = 0; j <= (7 * n); j++)
        {
            if (j % 7 != 0 || j == 0)
            {
                total[i] += array[i * 7 + j];
            }
            else
            {
                break;
            }
        }
        printf("%d ", total[i]);
    }
}