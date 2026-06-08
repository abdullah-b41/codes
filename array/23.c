#include <stdio.h>

int main() //* Intersection of arrays in ascending order.
{
    int n1, n2, a[100000], b[100000], fa[100000] = {0},fb[100000] = {0}, c[100000] = {0};
    scanf("%d", &n1);

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        fa[a[i]]++;
    }

    scanf("%d", &n2);

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        fb[b[i]]++;
    }

    // int k = 0; 
    // for (int i = 0; i < 100000; i++) //* Using frequency array ->O(n)!
    // {
    //     if (fa[i]>0 && fb[i]>0)
    //     {
    //         c[k] = i;
    //         k++;
    //     }
    // }

    int k = 0;
    for(int i=0;i<n1;i++) //* Using iintersection directly -> O(n^2)!
    {
        for(int j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
