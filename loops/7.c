#include <stdio.h>

int main() //* Variance determiner!
{
    int n;
    float sum1=0,sum2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        float a;
        scanf("%f",&a);
        sum1 += a;
        sum2 += a*a;
    }
    float variance = sum2/n - (sum1/n)*(sum1/n);
    printf("%.4f",variance);
    return 0;
}