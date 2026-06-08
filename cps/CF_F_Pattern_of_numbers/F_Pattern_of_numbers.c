#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i=1; i<=b; i++)
    {
        for (int j=1; j<=i; j++)
        {
            int num = pow (j,a);
            printf("%d ", num);
        }
        printf("\n");
    }
}