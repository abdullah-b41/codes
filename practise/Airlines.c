#include <stdio.h>
int main() 
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int plane = (b - (a * 100));
        if (plane <= 0)
        {
            printf("0\n");
        }
        else if (plane % 100 == 0)
        {
            printf("%d\n", plane / 100);
        }
        else
        {
            printf("%d\n", (plane / 100) + 1);
        }
    }
    return 0;
}