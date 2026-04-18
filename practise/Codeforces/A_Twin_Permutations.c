#include <stdio.h>

int main() //* "output 'any permutation' 𝑏 which satisfies the constraints mentioned in the statement"
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], max = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &a[i]);
            if (a[i] > max)
                max = a[i];
        }

        max += 1; //* 1 greater than the max value of a[n].
        for (int i = 0; i < n; i++) 
        {
            int req = max - a[i]; //* simply print what's left so that all indexes are equal if added. => 1+5 = 3+3 .....
            printf("%d ", req);
        }
        printf("\n");
    }
}