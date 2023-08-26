#include "monty.h"
/**
 * opcode_swap - opcode swap function
 * @h: pointer to header node
 * @line_number: line number
 */

void opcode_swap(stack_t **h, unsigned int line_number)
{
	stack_t *temp, *ahead;

	if (len(*h) < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else if (len(*h) == 2)
	{
		temp = *h;
		ahead = temp->next;
		ahead->next = temp;
		ahead->prev = NULL;
		temp->prev = ahead;
		temp->next = NULL;
		*h = ahead;
	}
	else
	{
		temp = *h;
		ahead = temp->next;
		temp->next = temp->next->next;
		ahead->next->prev = temp;
		ahead->next = temp;
		ahead->prev = NULL;
		*h = ahead;
	}
}
