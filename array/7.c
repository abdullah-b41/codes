#include <stdio.h> //! Parini.

int main() //* Move a selected number to last and change it to -1.
{
    int n, arr[100000] = {};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < n;)
    {
        if (arr[i] == x)
        {
            for (int j = i; j < n; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = -1;
        }
        else
            i++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}