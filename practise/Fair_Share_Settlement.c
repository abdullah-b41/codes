#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int k,n;
        scanf("%d %d", &k, &n);
        int fnd=k/(n+1);
        int me=k-n*fnd;
        printf("%d\n",me);
    }
}