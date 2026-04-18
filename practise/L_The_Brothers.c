#include <stdio.h>
#include <string.h>

int main()
{
    char f1[100], s1[100], f2[100], s2[100];
    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    int n = strlen(s1);
    int prb = 0;
    for (int i=0; i<n; i++)
    {
        if (s1[i] != s2[i])
        {
            prb++;
        }
    }

    if(prb == 0) printf("ARE Brothers");
    else printf("NOT");

}