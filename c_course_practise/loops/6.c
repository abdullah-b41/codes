#include <stdio.h>

int main(void) //* Determining 2nd MAX >>>> Important*****
{
    int n, a, max1, max2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (i == 0)
        {
            max1 = a;
            max2 = a;
        }
        if (a > max2)
            max2 = a;
        if (a > max1)
        {
            max2 = max1;
            max1 = a;
        }
    }
    printf("%d", max2);
    return 0;
}