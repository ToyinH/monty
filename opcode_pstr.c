#include "monty.h"
/**
 * opcode_pstr - prints the string at the top of the stack
 * @h: pointer to the head node
 * @line_number: line number
 */

void opcode_pstr(stack_t **h, unsigned int line_number)
{
	stack_t *temp;
	int num;

	(void)line_number;
	if (*h == NULL)
	{
		dprintf(1, "\n");
	}
	else
	{
		temp = *h;
		while (temp != NULL)
		{
			num = temp->n;
			if (!((num >= 65 && num <= 90) || (num >= 97 && num <= 122)))
			/*if (num > 127 || num == 0) */
				break;
			else if (num == 0)
				break;
			dprintf(1, "%c", (char)num);
			temp = temp->next;
		}
		dprintf(1, "\n");
	}
}
