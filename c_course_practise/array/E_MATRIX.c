#include <stdio.h>

int main()
{
    int col;
    scanf("%d", &col);
    int hotel[3][col];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &hotel[i][j]);
        }
    }

    int profit = 0;
    for (int i = 0; i < col; i++)
    {
        int unit = 0, p = 0, s = 0;
        for (int j = 0; j < 3; j++)
        {
            if(j==0) unit=hotel[j][i];
            if(j==1) p=hotel[j][i];
            if(j==2) s=hotel[j][i];
        }
        profit += unit * (s - p);
    }
    printf("Total Profit: %d taka", profit);
}