#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1], cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        for (int j = 1; j <= arr[i]; j++)
        {
            if (j % 10 == 0)
                continue;
            if (j < 10 && j == i)
                cnt++;
            if (j > 10 && j == i * 11)
                cnt++;
            if (i % 11 == 0 && (j == i % 10 || j == i))
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}