#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], new[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            new[i] = arr[i];
        }
        else
        {
            new[i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 || arr[i] == 0)
        {
            int min = 10000000;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2 != 0 && arr[j] < min)
                {
                    min = arr[j];
                    new[i] = min;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == min)
                {
                    arr[j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", new[i]);
    }
}