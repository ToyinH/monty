#include "monty.h"
/**
 * len - function to get the lenght of linked list
 * @h: pointer to header node
 * Return: return lenght.
 */

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
