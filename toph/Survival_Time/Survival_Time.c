#include <stdio.h>
#include <math.h>

int main(void)
{
    int t; 
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        int n, x, d;
        scanf("%d %d %d", &n, &x, &d);
        printf("%d\n", (int)(d + floor(n / (x*5))));
    }
    return 0;
}