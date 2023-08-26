#include "monty.h"
/**
 * opcode_pop - opcode pop function
 * @h: pointer to header node
 * @line_number: line number
 */

void opcode_pop(stack_t **h, unsigned int line_number)
{
	stack_t *temp;

	if (*h == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *h;
	if (temp->next != NULL)
	{
		temp = temp->next;
		free(*h);
		temp->prev = NULL;
		*h = temp;
	}
	else
	{
		free(*h);
		*h = NULL;
	}
}
