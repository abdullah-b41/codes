#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string cipher(string key, string plain);

int main(int argc, string argv[])
{
    int farray[26] = {0};

    if (argc == 2) // Checking if number of input correct
    {
        for (int i = 0; argv[1][i] != '\0'; i++) // Checking for only digits as input
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Key must contain only characters.\n");
                return 1;
            }
            else if (strlen(argv[1]) != 26)
            {
                printf("Key must contain 26 characters.\n");
                return 1;
            }
            if (isupper(argv[1][i]))
            {
                int index = argv[1][i] - 'A';
                farray[index]++;
            }
            else if (islower(argv[1][i]))
            {
                int index = argv[1][i] - 'a';
                farray[index]++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (farray[i] != 1)
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }

        string plain = get_string("plaintext:  ");
        printf("ciphertext: %s\n", cipher(argv[1], plain));
        return 0;
    }
    else
    {
        printf("Usage: ./substitution key\n"); // Prompting until get valid input
        return 1;
    }
}

string cipher(string key, string plain) // Ciphering the text
{
    int array[26] = {0};
    for (int i = 0; i < 26; i++)
    {
        if (isupper(key[i])) // Extracting upper cases
        {
            array[i] = key[i] - 'A';
        }
        else // Extracting lower cases
        {
            array[i] = key[i] - 'a';
        }
    }
    int n = strlen(plain);
    for (int i = 0; i < n; i++)
    {
        if (isupper(plain[i])) // Extracting upper cases
        {
            plain[i] = 'A' + array[plain[i] - 'A'];
        }
        else if (islower(plain[i])) // Extracting lower cases
        {
            plain[i] = 'a' + array[plain[i] - 'a'];
        }
        else // Kepping non alphabet items same
        {
            plain[i] = plain[i];
        }
    }
    return plain;
}
