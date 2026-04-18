#include <stdio.h>

int main(void) //* Max and Min finder
{
    int n, a, max, min;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (i == 0)
        {
            max = a;
            min = a;
        }
        if (a > max)
            max = a;
        if (a < min)
            min = a;
    }
    printf("Max : %d\nMin : %d", max, min);
    return 0;
}