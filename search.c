#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Staticly define array with string
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    const 

    //Get string input from user
    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}