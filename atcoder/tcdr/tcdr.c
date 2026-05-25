#include <stdio.h>
#include <string.h>

int main()
{
    char in[100], out[100] = {};
    int index = 0;
    scanf("%s", in);
    for (int i = 0; i < strlen(in); i++)
    {
        if (in[i] != 'a' && in[i] != 'e' && in[i] != 'i' && in[i] != 'o' && in[i] != 'u')
        {
            out[index] = in[i];
            index++;
        }
    }
    printf("%s\n", out);
}