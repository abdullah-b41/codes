#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int digits=0;
		int last_digit=0;
		int x=i;
		while(x>0)  
		{
			last_digit=x%10;
			digits++;
			x=x/10;
		}
		x=i;
		int sum=0;
		while(x>0)
		{
			last_digit=x%10;
			sum=sum+pow(last_digit,digits);
			x=x/10;
		}
		if(sum==i) 
		{
		printf("%d\n",i);
	    }
	}
 return 0;
}