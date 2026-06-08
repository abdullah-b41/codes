#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = {};
    scanf("%s", s);
    int best = 0, n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            printf("Invalid Input\n");
            return 0;
        }
        if (s[i] == '1')
        {
            int j = i, cnt = 0;
            while (s[j] == '1')
            {
                cnt++;
                j++;
            }
            best = cnt > best ? cnt : best;
        }
    }
    printf("%d\n", best);
}
