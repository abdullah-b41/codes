#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        int a1, a2, b1, b2;
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        if((a1-a2+b1-b2) < 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

}