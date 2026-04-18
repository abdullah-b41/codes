#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? "); // Collected name from the user
    printf("Hello, %s\n", name);                    // Printed the task
}
