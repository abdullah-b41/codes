#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++)
	{
	    int a, b, c;
	    scanf("%d %d %d", &a, &b, &c);
	    if(c%3==0 && b%2==1) printf("Yes\n");
	    else printf("No\n");
	}
}

