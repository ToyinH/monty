#include "monty.h"
/**
 * opcode_nop - function that does nothing
 * @h: pointer to header node
 * @line_number: line number
 */

void opcode_nop(stack_t **h, unsigned int line_number)
{
	(void)*h;
	(void)line_number;
}
