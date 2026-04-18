#include <stdio.h>
#include <math.h> 

int main()
{
    int a,b,r1,c,d,r2;
    float r1r2,c1c2;
    scanf("%d%d%d%d%d%d",&a,&b,&r1,&c,&d,&r2);
    c1c2 = sqrt((a-c)*(a-c) + (b-d)*(b-d));
    r1r2 = fabs(r1-r2);

    if (c1c2 > r1+r2) printf("Scenario 1");
    else if (c1c2 == r1+r2) printf("Scenario 2");
    else if (c1c2 == 0)
    {
        if (r1 > r2) printf("Scenario 7");
        else printf("Scenario 6");
    }
    else 
    {
        if (c1c2 == r1r2 && r1>r2) printf("Scenario 5");
        else if (c1c2 == r1r2 && r1<r2) printf("Scenario 4");
        else printf("Scenario 3");
    }
    return 0;
}