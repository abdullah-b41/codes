#include <stdio.h> //! Lab quiz :))))))

int main() //* Merge 2 array and sort without taking 3rd array.
{
    int n, m, a[100000] = {}, b[100000] = {};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    //!
    // for (int i = 0; i < m; i++) // adding 2nd array elements in 1st array.
    // {
    //     scanf("%d", &b[i]);
    //     a[n + i] = b[i];
    // }
    // for (int i = 0; i < m + n - 1; i++) //* Using nested loop -> O(n^2)
    // {
    //     for (int j = i + 1; j < m + n; j++)
    //     {
    //         if (a[j] < a[i]) // Ascending.
    //         {
    //             int temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }
    //* without nested loop
    if (a[0] > a[n - 1]) // Sort a[] ascending if not already sorted.
    {
        for (int i = 0; i < n / 2; i++) // O(n).
        {
            int temp = a[i];
            a[i] = a[n - 1 - i];
            a[n - 1 - i] = temp;
        }
    }
    if (b[0] > b[m - 1]) // Sort b[] ascending if not already sorted.
    {
        for (int i = 0; i < m / 2; i++) // O(n).
        {
            int temp = b[i];
            b[i] = b[m - 1 - i];
            b[m - 1 - i] = temp;
        }
    }
    int j = n - 1, k = m - 1;
    for (int i = m + n - 1; i >= 0; i--) // O(n).
    {
        if (j >= 0 && k >= 0) // check if any array if finished doing below work
        {
            if (a[j] >
                b[k]) // in ascended last one is biggest check which array
                      // element is larger put that in 1st array from last
            {
                a[i] = a[j];
                j--;
            }
            else
            {
                a[i] = b[k];
                k--;
            }
        }
        else if (j < 0) // if ones elements are finished, put other ones.
        {
            a[i] = b[k];
            k--;
        }
        else
        {
            a[i] = a[j];
            j--;
        }
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", a[i]);
    }
}