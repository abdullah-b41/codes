#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        int sup, b;
        scanf("%d %d", &sup, &b);
        int dem = 20 * b;
        if (sup <= dem)
        {
            printf("%d\n", sup / b);
        }
        else
        {
            printf("20\n");
        }
    }
    return 0;
}