#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n], dia = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j || i + j == n - 1)
                dia += arr[i][j];
            else
                sum += arr[i][j];
        }
    }

    if (dia == sum)
        printf("Good");
    else
        printf("Not good");
}