#include <stdio.h>

int main() //* Check if elements sum up to a given value.
{
    int n, arr[100000], k;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++) //* Exchange sort
        {
            if (arr[i] + arr[j] == k)
            {
                printf("True\n");
                return 0;
            }
        } 
    }
    printf("False\n");
    return 0;
}