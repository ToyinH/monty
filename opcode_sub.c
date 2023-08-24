#include "monty.h"
/**
 * opcode_sub - func that sub 2 elements (first from second),
 * delete first element and replace second element with sum
 * @h: pointer to header node
 * @line_number: line number
 */

void opcode_sub(stack_t **h, unsigned int line_number)
{
	stack_t *temp, *ahead;

	if (len(*h) < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *h;
	ahead = temp->next;
	ahead->n = (ahead->n) - (temp->n);
	free(*h);
	*h = ahead;
	ahead->prev = NULL;
}
