#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], max1 = 0, max2 = -1000000;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max1)
            max1 = arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (max1 == arr[i])
        {
            arr[i] = -100000000;
            cnt++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2)
            max2 = arr[i];
    }

    if (max1 == max2 || cnt == n)
        printf("No second maximum exists");
    else
        printf("%d", max2);
}