#include "monty.h"


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