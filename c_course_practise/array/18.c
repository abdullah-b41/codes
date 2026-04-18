#include <stdio.h>

int main() //* maximum ascending sequence length, else print 1.
{
    int n,arr[100000],k=1,max_k=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            k++;
            if(k>max_k)
                max_k=k;
        }
        else 
        {
            k=1;
        }
    }
    printf("%d\n", max_k);
    return 0;
}