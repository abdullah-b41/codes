#include <stdio.h>

int main() //* 2nd and 3rd maximum finder.

{
    int n, arr[100000], max = -10000000, max2 = -10000000, max3 = -10000001;
    int index2 = 0, index3 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] < max)
        {
            max3 = max2;
            max2 = arr[i];
            index3 = index2;
            index2 = i;
        }
        else if (arr[i] > max3 && arr[i] < max2)
        {
            max3 = arr[i];
            index3 = i;
        }
    }
    printf("2nd Maximum: %d, Index= %d\n3rd Maximum: %d, Index= %d", max2, index2, max3, index3);
}