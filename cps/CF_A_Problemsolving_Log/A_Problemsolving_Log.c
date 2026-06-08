#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char in[500];
        int n, cnt = 0, f_arr[26] = {};
        scanf("%d %s", &n, in);
        for (int i = 0; i < n; i++)
            f_arr[in[i] - 'A']++;
        for (int i = 0; i < 26; i++)
        {
            if (f_arr[i] >= i + 1)
                cnt++;
        }
        printf("%d\n", cnt);
    }
}