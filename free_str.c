#include "monty.h"
/**
 * free_str - function to free str and array of strings
 * @str: array of strings
 */
void free_str(char **str)
{
	int i = 0;

	if (str == NULL)
		return;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}
