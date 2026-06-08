#include <stdio.h>

int main() //* changing random index
{
    int n, arr[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index, new;
    scanf("%d %d", &index, &new);
    for (int i = 0; i < n; i++)
    {
        if (index == i)
            arr[i] = new;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}