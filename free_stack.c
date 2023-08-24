#include "monty.h"
/**
 * free_stack - function to free stack
 * @head: pointer to head node of struct
 */

void free_stack(stack_t *head)
{
	stack_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
