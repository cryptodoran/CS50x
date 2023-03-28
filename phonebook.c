#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Create string array with stored names
    string names[] = {"Carter", "David"};
    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"};

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            // Return code to main (in background) to end loop, else it will continue to run and print Not Found, as well.
            return 0;
        }
    }
    printf("Not Found\n");
    // Return 1 isn't necessary after closing the loop with return 0 above, but it makes the code cleaner and easier to work with.
    return 1;

}