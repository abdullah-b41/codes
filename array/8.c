#include <stdio.h>

int main() //* occurrences of every element.
{
    int n, arr[1000] = {0}, num[1001] = {0}, max = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
        num[arr[i]]++;
    }

    for (int i = 0; i <= max; i++)
    {
        if (num[i] > 0)
        {
            printf("%d %d\n", i, num[i]);
        }
    }
}