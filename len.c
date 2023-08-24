#include "monty.h"

int len(stack_t *h)
{
	int count = 0;
	stack_t *temp;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}