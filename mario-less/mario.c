#include <cs50.h>
#include <stdio.h>

void print_grid(int height);
int get_height(void);

int main(void)

//Get height input from user by pulling from get_height code string below
{
    int n = get_height();

//Prints final output after calculations are made using print_grid string below
    {
        print_grid(n);
    }
}


//Asks user for height and establishes that all variables are integers

int get_height(void)

{
    int n, x, y, z;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);
    return n;

}

//Prints pyramid of hashes (#) with built-in math/variables/conditions to determine spaces before each
void print_grid(int height)
{
    int x, y, z;

    for (x = 0; x < height; x++)
    {
        for (z = 0; z < height - x - 1; z++)
        {
            printf(" ");
        }
        for (y = -1; y < x; y++)
        {
            printf("#");
        }
        printf("\n");
    }

}

//This is CS50 + Mario