#include "monty.h"
/**
 * opcode_div - func that divide second element by first,
 * delete first element and replace second element with sum
 * @h: pointer to header node
 * @line_number: line number
 */

void opcode_div(stack_t **h, unsigned int line_number)
{
	stack_t *temp, *ahead;

	if (len(*h) < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *h;
	if (temp->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	ahead = temp->next;
	ahead->n = (ahead->n) / (temp->n);
	free(*h);
	*h = ahead;
	ahead->prev = NULL;
}
