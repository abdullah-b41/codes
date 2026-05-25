#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[7], max = -1000000;
        for (int i = 0; i < 7; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] > max)
                max = arr[i];
        }
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] <= max)
                sum -= arr[i];
        }
        sum += 2 * max;
        printf("%d\n", sum);
    }
}