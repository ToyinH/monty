#include "monty.h"
/**
 * opcode_exec - function that handle tokens and pass opcode
 * @str: operation code or string
 * @head: pointer to header node
 * @line_number: number of lines
 */

void opcode_exec(char **str, stack_t **head, unsigned int line_number)
{
	unsigned int i;
	int valid_instruction_found;
	char *opcode = str[0], *endptr;

	instruction_t instruct[] = {
		{"push", opcode_push},
		{"pall", opcode_pall},
		{"pint", opcode_pint},
		{"pop", opcode_pop},
		{"swap", opcode_swap},
		{"add", opcode_add},
		{"nop", opcode_nop},
		{"sub", opcode_sub},
		{"div", opcode_div},
		{"mul", opcode_mul},
		{"mod", opcode_mod},
		{"pchar", opcode_pchar},
		{"pstr", opcode_pstr},
		{"rotl", opcode_rotl},
		{"rotr", opcode_rotr}
	};

	if (strcmp(opcode, "push") == 0)
	{
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
	valid_instruction_found = 0;
	for (i = 0; i < sizeof(instruct) / sizeof(instruct[0]); i++)
	{
		if (strcmp(instruct[i].opcode, opcode) == 0)
		{
			instruct[i].f(head, line_number);
			valid_instruction_found = 1;
			break;
		}
	}
	if (!valid_instruction_found)
	{
		dprintf(2, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
