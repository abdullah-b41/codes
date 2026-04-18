#include <stdio.h>

int main() //* Find " pairs " in array in reverse order.
{
    int n, arr[100000], k = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                k++;
            }
        }
    }
    printf("%d\n", k);
    return 0;
}