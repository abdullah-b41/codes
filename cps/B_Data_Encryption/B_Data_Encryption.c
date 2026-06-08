#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char s[2000000];
        int k = 0;
        scanf("%d %[^/n]s", &k, s);
        printf("%s\n",s);
        int n = strlen(s);
        int place = 1;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == ' ')
            {
                place = 1;
            }
            else if (isalpha(s[j]))
            {
                if ((place) % 2 != 0)
                {
                    s[j] += 1;
                    place++;
                }
                else
                {
                    s[j] -= 1;
                    place++;
                }
            }
            else if (s[j] >= '0' && s[j] <= 9)
            {
                s[j] = '9' - s[j];
            }
        }

        if (k % 2 != 0)
        {
            printf("Case %d: Encrypted data - %s\n", i + 1, s);
        }
        else
        {
            printf("Case %d: Real data - %s\n", i + 1, s);
        }
    }
}