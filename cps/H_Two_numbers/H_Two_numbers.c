#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    float c=(float)a/b;
    printf("floor %d / %d = %.0f\nceil %d / %d = %.0f\nround %d / %d = %.0f\n",
         a,b,floor(c),a,b,ceil(c),a,b,round(c));
}