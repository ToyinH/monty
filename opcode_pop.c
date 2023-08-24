#include "monty.h"

void opcode_pop(stack_t **h, unsigned int line_number)
{
    stack_t *temp;

    if (*h == NULL)
    {
        dprintf(2, "L%d: can't pop an empty stack", line_number);
        exit(EXIT_FAILURE);
    }
    temp = *h;
    if (temp->next != NULL)
    {
        temp = temp->next;
        free(*h);
        temp->prev = NULL;
        *h = temp;
    }
    else
    {
        free(*h);
        *h = NULL;
    }
    
    
}