#include "monty.h"
/**
 * opcode_pchar - prints the char at the top of the stack
 * @h: pointer to the head node
 * @line_number: line number
 */

void opcode_pchar(stack_t **h, unsigned int line_number)
{
	stack_t *temp;
	int num;

	if (*h == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *h;
	num = temp->n;
	if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
	{
		dprintf(1, "%c\n", (char)num);
	}
	else
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
