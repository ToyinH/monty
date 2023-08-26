#include "monty.h"
/**
 * monty_func - func to get strings and hanlde it
 * @str: string
 *
 */

void monty_func(char *str)
{
	char *line = NULL;
	size_t l = 0;
	ssize_t char_read;
	char **strings = NULL;
	unsigned int line_number = 1;
	stack_t *stack = NULL;
	FILE *file = fopen(str, "r");

	if (file == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", str);
		exit(EXIT_FAILURE);
	}
	while ((char_read = getline(&line, &l, file)) != -1)
	{
		if (strcmp(line, "\n") == 0)
		{
			line_number++;
			continue;
		}
		strings = handl_strtok(line);
		if (strncmp(strings[0], "#", 1) == 0)
		{
			opcode_nop(&stack, line_number);
			free_str(strings);
			line_number++;
			continue;
		}
		if (strings[1])
		{
			n = atoi(strings[1]);
		}
		else if (strings[1] == NULL)
		{
			dprintf(2, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		opcode_exec(strings[0], &stack, line_number);
		line_number++;
		free_str(strings);
	}
	free(line);
	free_stack(stack);
	fclose(file);
}
