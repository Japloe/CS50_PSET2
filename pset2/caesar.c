/*
* Takes key from user and performs a caesar encryption on text
* provided by the user
*
* caesar.c
* japloe.sneh@gmail.com
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
	if (argc == 2)
	{
		int k  = atoi(argv[1]);
		
		string message = GetString();
		
		for (int i = 0; i < strlen(message); i++)
		{
			if (isalpha(message[i]))
			{
				// Lowercase letters
				if (islower(message[i]))
				{
					printf("%c", ((((message[i] - 97) + k) % 26) + 97));
				}
				
				if (isupper(message[i]))
				{
					printf("%c", ((((message[i] - 65) + k) % 26) + 65));
				}
			}
			
			else
			{
				printf("%c", message[i]);
			}
		}
		printf("\n");
		
	}
	else 
	{
		printf("Please start the program using the correct format\n");
		return 1;
	}
	
	return 0;
}