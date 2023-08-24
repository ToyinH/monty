#include "monty.h"
/**
 * handl_strtok - function that handle strtok
 * @strline: a single line string
 *
 * Return: return array of strings or NULL
 */

char **handl_strtok(char *strline)
{
	char **toks, *s;
	int i = 0;

	if (strline == NULL)
	{
		return (NULL);
	}
	/*malloc space for array of pointers*/
	toks = malloc(sizeof(char *) * 32);
	if (toks == NULL)
	{
		free(strline);
		return (NULL);
	}
	/*tokenize and malloc space to save each token*/
	s = strtok(strline, " $\n");
	toks[i] = malloc(sizeof(char) * strlen(s) + 1);
	if (toks[i] == NULL)
	{
		free(strline);
		free_str(toks);
		return (NULL);
	}
	strcpy(toks[i], s);
	while ((s = strtok(NULL, " $\n")) != NULL)
	{
		i++;
		toks[i] = malloc(sizeof(char) * strlen(s) + 1);
		if (toks[i] == NULL)
		{
			free(strline);
			free_str(toks);
			return (NULL);
		}
		strcpy(toks[i], s);
	}
	toks[++i] = NULL;
	return (toks);
}
