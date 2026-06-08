#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i=1; i<=t ;i++)
    {
        int b, cnt = 0;
        scanf("%d", &b);
        int temp = b;
        for (int j=0; j<b; j++)
        {
            if(temp%2 != 0)
            {
                cnt++;
            }
            temp /= 2;
        }
        if (cnt%2 == 0)
        {
            printf("Case %i: even\n", i);
        }
        else
        {
            printf("Case %i: odd\n", i);
        }
    }
}