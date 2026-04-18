#include <stdio.h>
#include <string.h>

char str[10000000];

int main()
{
    scanf("%s", str);
    int n = strlen(str);

    // for (int i=65; i<=90; i++)     ### Bangla niyom
    // {
    //     int cnt = 0;
    //     for (int j=0; j<n; j++)
    //     {
    //         if((int)str[j]>90)
    //         {
    //             str[j] = str[j] - 32;
    //         }
    //         if ((int)str[j]==i)
    //         {
    //             cnt++;
    //         }
    //     }
    //     printf("%c = %d\n",(char)i, cnt);
    // }

    int farr[26] = {0};

    for (int i = 0; i<n; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
        int index = str[i] - 'a';
        farr[index]++;
        }
        else
        {
        int index = str[i] - 'A';
        farr[index]++;
        }
    }

    for (int i = 0; i<26; i++)
    {
        if(farr[i] > 0)
        {
        printf("%c : %d\n", i + 'a', farr[i]);
        }
    }
    
}