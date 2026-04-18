#include <stdio.h>

int main() //* first and last index of a given number.
{
    int n, arr[1000000], findex = 0, lindex = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            findex = i;
            break;
        }
    }

    for (int i = findex+1; i < n; i++)
    {
        if (arr[i] == num)
        {
            lindex = i;
        }
    }
    
    if (findex == 0 && lindex == 0)
        printf("-1");
    else
        printf("First Index: %d, Last Index: %d", findex, lindex);
}