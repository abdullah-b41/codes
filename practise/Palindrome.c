#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10000];
    scanf("%s", str);
    int ltr = strlen(str);
    int cnt = 0;

    for (int i = 0, j = ltr-1; i < j; i++, j--)
    {
        if(str[i] == str[j])
        {
            cnt++;
        }
    }
    if(cnt==ltr/2)
        printf("YES");
    else 
        printf("NO");
    return 0;
}