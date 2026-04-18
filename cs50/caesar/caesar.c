#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string cipher(string a, long long int k);

int main(int argc, string argv[])
{
    if (argc == 2) // Checking if number of input correct
    {
        for (int i = 0; argv[1][i] != '\0'; i++) // Checking for only digits as input
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        long long int k = atoi(argv[1]); // Converted the string into digit
        string plain = get_string("plaintext:  ");
        printf("ciphertext: %s\n", cipher(plain, k));
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n"); // Prompting until get valid input
        return 1;
    }
}

string cipher(string a, long long int k) // Ciphering the text
{
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        if (isupper(a[i])) // Extracting upper cases
        {
            int p = a[i] - 'A';
            int c = (p + k) % 26;
            a[i] = (char) (c + 'A');
        }
        else if (islower(a[i])) // Extracting lower cases
        {
            int p = a[i] - 'a';
            int c = (p + k) % 26;
            a[i] = (char) (c + 'a');
        }
        else // Keeping non alphabet items same
        {
            a[i] = a[i];
        }
    }
    return a;
}
