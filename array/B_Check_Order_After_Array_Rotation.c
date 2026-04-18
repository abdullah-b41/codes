#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    k = k % n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int new[n];
    for (int i = 0; i < n; i++)
    {
        if (i + k >= n)
        {
            new[(i + k) % n] = arr[i];
        }
        else
        {
            new[i + k] = arr[i];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (new[i + 1] > new[i])
            cnt++;
    }
    if (cnt == n - 1)
        printf("YES");
    else
        printf("NO");
}