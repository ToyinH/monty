#include "monty.h"
/**
 * opcode_rotl - function that reverse linked list
 * @h: pointer to header node
 * @line_number: line number
 */
void opcode_rotl(stack_t **h, unsigned int line_number)
{
	stack_t *current, *current2, *ahead;

	if (*h == NULL || len(*h) == 1)
		return;
	current = *h;
	ahead = current->next;
	current2 = *h;
	(void)line_number;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current2->prev = current;
	current2->next = NULL;
	current->next = current2;
	ahead->prev = NULL;
	*h = ahead;
}
