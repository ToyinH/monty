#include "monty.h"
/**
 * isspace_str - func to check for space and address them
 * @str: string to check
 * Return: return 1 if a character is encountered.
 */
int isspace_str(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (!isspace(str[k]))
		{
			return (1);
		}
		k++;
	}
	return (0);
}
