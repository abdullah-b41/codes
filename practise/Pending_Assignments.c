#include <stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        if(a*b<=c*1440)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}