#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        int a;
        scanf("%d", &a);
        if (a%2 ==0 || a ==1) printf("Yes\n");
        else printf("No\n");
    }
}