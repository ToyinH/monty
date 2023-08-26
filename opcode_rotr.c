#include "monty.h"
/**
 * opcode_rotr - function that takes last element to top
 * @h: pointer to header node
 * @line_number: line number
 */
void opcode_rotr(stack_t **h, unsigned int line_number)
{
	stack_t *current, *current2;

	if (*h == NULL || len(*h) == 1)
		return;
	current = *h;
	current2 = *h;
	(void)line_number;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->prev->next = NULL;
	current->next = current2;
	current->prev = NULL;
	current2->prev = current;
	*h = current;
}
