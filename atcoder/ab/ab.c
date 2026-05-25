#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char in[100] = {};
    scanf("%d %s", &n, in);
    for (int i = 0; i < n; i++)
    {
        if (in[i] == 'a' && in[i + 1] == 'b')
        {
            printf("Yes\n");
            return 0;
        }
        if (in[i] == 'b' && in[i + 1] == 'a')
        {
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
}