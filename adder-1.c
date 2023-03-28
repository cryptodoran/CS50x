/**
 * adder-1.c
 * Doug Lloyd
 * lloyd@cs50.harvard.edu
 *
 * Adds two numbers.
 *
 * Demonstrates use of CS50's library and functions
 */


// includes
#include <cs50.h>
#include <stdio.h>

// declare function prototype
int add_two_ints(int a, int b);

int main(void)
{
    // ask user for input
    int x = get_int("Give me an integer: ");
    int y = get_int("Give me another integer: ");

    // add the two numbers together via a function call
    int z = add_two_ints(x, y);

    // output the result
    printf("The sum of %i and %i is %i!\n", x, y, z);

}

int add_two_ints(int a, int b)
{
    int sum = a + b;
    return sum;
}










//Below is me trying to learn the Functions portion of Doug Lloyds shorts in Week 2 Arrays

//declare triangle function
int valid_triangle(float a, float b, float c);

int main(void)
{
    //ask user for length of three sides of triangle
    int sideone = get_int("What is the length of side one? ");
    int sidetwo = get_int("What is the length of side two? ");
    int sidethree = get_int("What is the length of side three? ");

    //triangle function call to determine if 2 sides are greater than 3rd side
    int z = valid_triangle(sideone, sidetwo, sidethree);

    //output true or false regarding triangle theorem
}

int valid_triangle(float a, float b, float c)
{
    if (a + b > c || a + b > c)
    {
        return True;
    }
    else if (a + b < c || a + b < c)
    {
        return False;
    }



}