#include <stdio.h>

int main() //* sum of elements
{
    int n, arr[100000];
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
}