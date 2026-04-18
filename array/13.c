#include <stdio.h>

int main() //* sorting ascending => bubble sort, descending => selection sort.
{
    int n, arr[100000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Ascending: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");

    printf("Sorted Descending: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}