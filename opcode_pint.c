#include "monty.h"

void opcode_pint(stack_t **h, unsigned int line_number)
{
    stack_t *temp;

    if (*h == NULL)
    {
        dprintf(2, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = *h;
    dprintf(1, "%d\n", temp->n);
       

}