#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char array[a][b];
    int cnt = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            scanf("%c",&array[i][j]);
            if(array[i][j]=='#')
            {
                cnt++;
            }
        }
    }
    printf("%d",cnt);

}