#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int letter_counter(string a);
int sentance_counter(string a);
int word_counter(string a);

int main(void)
{
    string para = get_string("Text: "); // taking input of paragraph
    int letter, sent, words;
    letter = letter_counter(para);                               // counting letters
    sent = sentance_counter(para);                               // counting sentences
    words = word_counter(para);                                  // counting words
    int grades = round(0.0588 * ((float) letter / words) * 100 - // formula
                       0.296 * ((float) sent / words) * 100 - 15.8);
    if (grades > 16)
    {
        printf("Grade 16+\n");
    }
    else if (grades < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grades);
    }
}

int letter_counter(string a) // letter counter
{
    int chr = strlen(a), letter = 0;
    for (int i = 0; i < chr; i++)
    {
        if ((a[i] == ',') || (a[i] == '!') || (a[i] == '?') || (a[i] == '.') || (a[i] == ' ') ||
            (a[i] == '"') || (a[i] == ';') || (a[i] == ':') || (a[i] == 39))
        {
            letter += 0;
        }
        else
        {
            letter++;
        }
    }
    return letter;
}

int sentance_counter(string a) // sentance counter
{
    int chr = strlen(a), sent = 0;
    for (int i = 0; i < chr; i++)
    {
        if ((a[i] == '.') || (a[i] == '!') || (a[i] == '?'))
        {
            sent += 1;
        }
        else
        {
            sent += 0;
        }
    }
    return sent;
}

int word_counter(string a) // words counter
{
    int chr = strlen(a), words = 0;
    for (int i = 0; i < chr; i++)
    {
        if (a[i] == ' ')
        {
            words += 1;
        }
        else
        {
            words += 0;
        }
    }
    return (words += 1);
}
