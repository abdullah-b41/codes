#include <stdio.h>

int main() //* sorted ascending in a range.
{
    int n, a[100000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = x; i < y + 1; i++) //* Bubble sort in a range
    {
        for (int j = x; j < y; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}