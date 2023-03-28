#include <stdio.h>


int main(void)
{
    // Char * instead of string, is the correct 'C' syntax, as string is only availble via the <cs50.h> library
    char *s = "HI!";
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
}