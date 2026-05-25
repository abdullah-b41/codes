#include <stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int a;
        scanf("%d ", &a);
        printf("%d\n",a*24*1000);
    }
}