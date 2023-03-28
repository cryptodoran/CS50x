#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

// Gets text from user to initially evaluate.
    string reading = get_string("Text: ");

// Initializes each variable that will be input into our index equation
    int letters = 0;
    int words = 1;
    int sentences = 0;

// Checks for alphabetical characters by using isalpha from the ctype library and adds those to letters.
    for (int i = 0; i < strlen(reading); i++)
    {
        if (isalpha(reading[i]))
        {
            letters++;
        }
    }

// Checks for spaces after each word and adds those to words. Foreseeable problem with compound words that utilize hyphens.
    for (int i = 0; i < strlen(reading); i++)
    {
        if (isspace(reading[i]))
        {
            words++;
        }
    }

// Checks for punctuation and adds up number of total sentences in text.
    for (int i = 0; i < strlen(reading); i++)
    {
        if (reading[i] == '.' || reading[i] == '!' || reading[i] == '?')
        {
            sentences++;
        }
    }

// Turns letters, words, and sentences into floats and determines number of letters/sentences in every 100 words.
    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / words * 100;

// Rounds indexing equation for later.
    int level = round(0.0588 * L - 0.296 * S - 15.8);

// Prints out necessary results.
    if (level < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (level > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", level);
    }
}
