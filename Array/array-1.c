#include<stdio.h>
#include<math.h>
int total[2000001];
int main(){
	int stds;
	scanf("%d",&stds);
	int x;
	for(int i=1; i<=stds; i++){
		scanf("%d",&x);
		total[x]=1;
	}
	for(int i=1; i<=stds; i++){
		if (total[x]==0){
			printf("%d",i);
		}
	}
 return 0;
}