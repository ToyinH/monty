#include "monty.h"
/**
 * monty_func - func to get strings and hanlde it
 * @str: string
 *
 */

void monty_func(char *str)
{
	char *line = NULL, **strings = NULL;
	size_t l = 0;
	ssize_t char_read;
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
		/*return 1 if character is encountered*/
		if (isspace_str(line) == 1)
		{
			strings = handl_strtok(line);
			if (strncmp(strings[0], "#", 1) == 0)
			{
				opcode_nop(&stack, line_number);
				free_str(strings);
				line_number++;
				continue;
			}
			opcode_exec(strings, &stack, line_number);
			line_number++;
			free_str(strings);
		}
		else
		{
			line_number++;
			continue;
		}
	}
	free(line);
	free_stack(stack);
	fclose(file);
}
