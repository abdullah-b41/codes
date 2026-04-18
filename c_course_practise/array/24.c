#include <stdio.h> //! Parini

int main() //* Delete 2nd array elements from 1st array.
{
    int n1, n2, a[100000], b[100000], f[100001] = {0};
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        f[b[i]]++;
    }

    // int k = 0;
    // for (int i = 0; i < n1; i++) // with frequency array ->O(n).
    // {
    //     if (f[a[i]] == 0)
    //     {
    //         a[k] = a[i];
    //         k++;
    //     }
    // }

    int k = 0;
    for (int i = 0; i < n1;
         i++) // If a[] doesn't hold b[] then rewrite a[] -> O(n^2).
    {
        int flag = 1;
        for (int j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            a[k] = a[i];
            k++;
        }
    }

    if (k > 0)
    {
        for (int i = 0; i < k; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
        printf("Empty\n");
    return 0;
}
