#include <stdio.h>
#include <string.h>

int main()
{
    char in[100];
    scanf("%s", in);
    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] == '1')

            printf("0");
        else
            printf("1");
    }
}
