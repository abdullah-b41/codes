#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a;
        scanf("%d", &a);
        double commission = a*0.2;
        printf("%d\n", (int)ceil(100/commission));
    }
    return 0;
}