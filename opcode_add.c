#include "monty.h"
/**
 * opcode_add - func that adds 2 elements, delete first element and replace
 * second element with sum
 * @h: pointer to header node
 * @line_number: line number
 */

void opcode_add(stack_t **h, unsigned int line_number)
{
	stack_t *temp, *ahead;

	if (len(*h) < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *h;
	ahead = temp->next;
	ahead->n = (temp->n) + (ahead->n);
	free(*h);
	*h = ahead;
	ahead->prev = NULL;
}
