#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x>='a' && x<='z') printf("ALPHA\nIS SMALL");
    else if(x>='A' && x<='Z') printf("ALPHA\nIS CAPITAL");
    else printf("IS DIGIT");
}