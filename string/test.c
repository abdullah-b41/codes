#include <stdio.h>

int main()
{
    char s[2000] = {0}, s2[2000] = {0};
    scanf("%s", s);
    scanf("%s", s2);
    int res = 0;
    for (int i = 0;; i++)
    {
        if (s[i] > s2[i])
        {
            res = 1;
            break;
        }
        else if (s[i] < s2[i])
        {
            res = -1;
            break;
        }
        else if (s[i] == '\n' && s2[i] == '\n')
        {
            res = 0;
            break;
        }
    }
    printf("%d\n", res);
    return 0;
    // int res = 0;
    // for (int i = 0;; i++)
    // {
    //     if (s[i] > s2[i])
    //     {
    //         res = 1;
    //         break;
    //     }
    //     else if (s[i] < s2[i])
    //     {

    //         res = -1;
    //         break;
    //     }
    //     if (s[i] && s2[i])
    //     {
    //         res = 0;
    //         break;
    //     }
    // }
    // printf("%d\n", res);
    // return 0;
}