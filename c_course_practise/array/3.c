#include <stdio.h>

int main() //* max,min in array
{
    int n;
    scanf("%d", &n);
    int arr[100000], max = -10000000, min = 10000000, index = 0, index2 = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            index2 = i;
        }
    }
    
    printf("Maximum: %d, Index= %d\nMinimum= %d, Index= %d", max, index, min, index2);
}