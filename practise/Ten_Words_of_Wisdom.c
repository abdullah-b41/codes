
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        int array[n][2];
        for (int j=0; j<n; j++)
        {
            for(int k=0; k<2; k++)
            {
                scanf("%d", &array[j][k]);
            }
        }
        int b=0,c;
        for (int j=0; j<n; j++)
        {
            if (array[j][0] <= 10)
            {
                if(array[j][1] >= b)
                {
                    b = array[j][1];
                    c = j;
                }
            }
        }
        printf("%d\n", c+1);
    }
    return 0;
}
