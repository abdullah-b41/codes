#include <stdio.h>

int main()
{
    int c, w;
    scanf("%d %d", &c, &w);
    if((w%500)!=0 || w<500 || w>20000)
    {
        printf("Invalid Withdrawal Amount");
    }
    else
    {
       int crg;
       if(w>=500 && w<=5000)
       {
        crg = 10;
       } 
       else if(w>=5001 && w<=10000)
       {
        crg = 20;
       }
       else
       {
        crg = 40;
       }
       if((c-w-crg) <= 0)
       {
        printf("Insufficient Balance");
       }
       else
       {
        printf("Remaining Balance = %d", c-w-crg);
       }
    }
    return 0;
}