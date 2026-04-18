#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    int lsb = a%10, temp = a;
    int c = 0;
    while(a>0)
    {
        a /= 10;
        c++;
    }
    int msb = temp / (int)pow(10,(c-1));
    if(msb == (2*lsb))
    {
        printf("Yes");
    }
    else 
    {
        printf("No");
    }
}