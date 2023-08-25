#include "monty.h"
/**
 * opcode_pall - opcode pall function
 * @h: pointer to header node
 * @line_number: line number
 */


void opcode_pall(stack_t **h, unsigned int line_number)
{
	stack_t *temp;
	int count = 0;
	(void)line_number;
	temp = *h;
	while (temp != NULL)
	{
		count++;
		dprintf(1, "%d\n", temp->n);
		temp = temp->next;
	}
}
