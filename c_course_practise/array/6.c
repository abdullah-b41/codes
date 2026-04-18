#include <stdio.h>

int main() //* number of occurrences of a selected element.
{
    int n, k, arr[100000], cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            cnt++;
    }
    printf("Occurrences: %d", cnt);
}