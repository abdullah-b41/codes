#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
   int spaces = (n-i);
   int stars = 2*i-1;

   while(spaces--){
    printf(" ");
   }
   while(stars--){
    printf("*");
   }
   printf("\n");
  }
 return 0;
}