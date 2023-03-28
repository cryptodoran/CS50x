#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
// Make sure a key (digit) is entered into the command line argument.
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
// Ensure argument is a digit.
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
// Convert string to integer so that it can be used in code below.
    int k = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

// Utilizing math and ASCII positions of alphabet properly set uppercase/lowercase as well as return Z to A.
    for (int j = 0; j < strlen(plaintext); j++)
    {
        if (isupper(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 65 + k) % 26 + 65);
        }
        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 97 + k) % 26 + 97);
        }
// If remainder of text within plaintext does not meet above criteria (such as numbers) print those as originally formatted.
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
}