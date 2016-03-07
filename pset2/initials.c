/* write, in a file called initials.c, a program that prompts a user for their name (using GetString to obtain their name as a string) and then outputs their initials in uppercase with no spaces or periods, followed by a newline ( \n) and nothing more. You
may assume that the user’s input will contain only letters (uppercase and/or lowercase) plus single spaces between words. Folks like Joseph Gordon­Levitt, Conan O’Brien, and David J. Malan won’t be using your program. (If only!) */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // Get users name
    string name = GetString();

    // Read input and output the initials
    // First initial
    printf("%c", toupper(name[0]));

    // Second and third initials
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (isspace(name[i]))
        {
            printf("%c", toupper(name[i + 1]));
        }
    }

    printf("\n");
}