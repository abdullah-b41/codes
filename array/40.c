#include <stdio.h>

int main() //* Binary search -> O(n^2 (Exchange sort) + log N (binary search)).
{
    int n, max, min, mid, x, a[1000000] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    for (int i = 0; i < n - 1; i++) // Sort using Exchange sort -> O(n^2).
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i]) // Ascending
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // min = 0, max = n - 1; //* Abdullah bhai
    // while (1)
    // {
    //     mid = (min + max) / 2;
    //     if (mid == min || mid == max) // 1st break point
    //         break;
    //     else if (a[mid] == x) // 2nd break point
    //     {
    //         printf("Yes\n");
    //         return 0;
    //     }
    //     else if (a[mid] > x)
    //         max = mid;
    //     else
    //         min = mid;
    // }
    //!
    min = 0, max = n - 1; //* BUET workshop --> Optimized ?
    while (min <= max)    // 1st break point
    {
        mid = (min + max) / 2;
        if (a[mid] == x) // 2nd break point
        {
            printf("Yes\n");
            return 0;
        }
        else if (a[mid] > x)
            max = mid - 1;
        else
            min = mid + 1;
    }
    printf("No\n"); // If not found
}