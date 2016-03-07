/**
*
* vigenere.c
*
* Japloe Sneh
*
* japloe.sneh@gmail.com
*
* encrypts a message using a key given at the command prompt
*
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    // validate the command line input
    if (argc != 2)
    {
        printf("Invalid response! Please try again.\n");
        return 1;
    }

    // convert the string into a valid key
    int keylen = strlen(argv[1]);
    char *key = argv[1];

    for (int n = 0; n < keylen; n++)
    {
        if (!isalpha(key[n]))
        {
            printf("Invalid response! Please try again.\n");
            return 1;
        }

        if (isupper(key[n]))
        {
            key[n] = (key[n] - 'A');
        }
        if (islower(key[n]))
        {
            key[n] = (key[n] - 'a');
        }
    }

    // get user input
    int j = 0;
    string message = GetString();

    // iterate through the message, shifting each letter, incrementing j
    for (int i = 0; i < strlen(message); i++)
    {
        // is the character alphabetical
        if (isalpha(message[i]))
        {
            // uppercase letters
            if (isupper(message[i]))
            {
                message[i] = ((message[i] - 'A') + (key[j % keylen]))
                    % 26 + 'A';
                printf("%c", message[i]);
            }

            // lower case letters
            if (islower(message[i]))
            {
                message[i] = ((message[i] - 'a') + (key[j % keylen]))
                    % 26 + 'a';
                printf("%c", message[i]);
            }

            j++;
        }

        // print non alpha characters
        if (isspace(message[i]) || isdigit(message[i]) || ispunct(message[i]))
        {
            printf("%c", message[i]);
        }
    }

    // line break
    printf("\n");
}









