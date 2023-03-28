#include <cs50.h>
#include <stdio.h>
#include <string.h>

    // Creating a data structure before initializing main, named "person"
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // Calling data structure from above and creating an array named "people" with 2 entries
    person people[2];

    // New way of storing data in the array "[].name / [].number" to keep them together for organization/logic purposes
    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            // Return code to main (in background) to end loop, else it will continue to run and print Not Found, as well.
            return 0;
        }
    }
    printf("Not Found\n");
    // Return 1 isn't necessary after closing the loop with return 0 above, but it makes the code cleaner and easier to work with.
    return 1;
}