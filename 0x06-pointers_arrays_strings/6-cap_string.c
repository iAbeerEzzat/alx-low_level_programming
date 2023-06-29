#include "main.h"
/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/

char *cap_string(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
	// capitalize the first letter of each word
	if (i == 0 || isspace(str[i-1])) {
		str[i] = toupper(str[i]);
	}
	}
	return str;
}
