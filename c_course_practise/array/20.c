#include <stdio.h>

int main() //* Elements swapping.
{
    int n, arr[100000], i, j, k;
    scanf("%d", &n);

    for (k = 0; k < n; k++)
        scanf("%d", &arr[k]);

    scanf("%d %d", &i, &j);

    for (k = j + 1; k < n; k++)
        printf("%d ", arr[k]);

    for (k = i; k < j + 1; k++)
        printf("%d ", arr[k]);

    for (k = 0; k < i; k++)
        printf("%d ", arr[k]);

    return 0;
}
