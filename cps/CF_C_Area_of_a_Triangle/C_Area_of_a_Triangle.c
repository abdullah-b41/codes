#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if( (a+b)>c && (b+c)>a && (c+a)>b )
    {
        float smp, area;
        smp = (a+b+c)/2;
        area = pow(smp*(smp-a)*(smp-b)*(smp-c),.5);
        printf("%.3f", area);
    }
    else
    {
        printf("Invalid triangle");
    }
}