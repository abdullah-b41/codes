#include <stdio.h>

int main() //* even indices => bubble, odd indices => selection.
{
    int n, arr[100000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i += 2) //* even bubble --> ascending
    {
        for (int j = 0; j < n - 2; j += 2)
        {
            if (arr[j] > arr[j + 2])
            {
                int temp = arr[j];
                arr[j] = arr[j + 2];
                arr[j + 2] = temp;
            }
        }
    }

    // for (int i = 1; i < n; i += 2) //* odd selection --> descending
    // {
    //     for (int j = 1; j < n - 2; j += 2)
    //     {
    //         if (arr[j] < arr[j + 2])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 2];
    //             arr[j + 2] = temp;
    //         }
    //     }
    // }

    for (int i = 1; i < n; i += 2) //* odd using " Exchange sort "
    {
        for (int j = i+2; j < n ; j += 2)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}