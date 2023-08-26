#include "monty.h"
/**
 * opcode_push - opcode push function
 * @h: pointer to header node
 * @line_number: line number
 */

void opcode_push(stack_t **h, unsigned int line_number)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	(void)line_number;
	if (new_node == NULL)
	{
		return;
	}
	new_node->n = n;
	if (*h == NULL)
	{
		*h = new_node;
		return;
	}
	else
	{
		new_node->next = *h;
		new_node->prev = NULL;
		(*h)->prev = new_node;
		*h = new_node;
	}
}
