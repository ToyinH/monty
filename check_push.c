#include "monty.h"
/**
 * check_push - check valid push arguments
 * @str: pointer to array of strings
 * @line_number: line number
 */
void check_push(char **str, unsigned int line_number)
{
	char *endptr;

	if (str[1])
	{
		n = (int)strtol(str[1], &endptr, 10);
		if (strcmp(str[1], endptr) == 0)
		{
			dprintf(2, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		else if (*endptr != '\0')
		{
			dprintf(2, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}
