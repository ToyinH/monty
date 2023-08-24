#include "monty.h"

void opcode_exec(char *opcode, stack_t **head, unsigned int line_number)
{
    unsigned int i;

    instruction_t instruct[] = {
        {"push", opcode_push},
        {"pall", opcode_pall},
        {"pint", opcode_pint},
        {"pop", opcode_pop},
        {"swap", opcode_swap}
    };

    for (i = 0; i < sizeof(instruct) / sizeof(instruct[0]); i++)
    {
        if (strcmp(instruct[i].opcode, opcode) == 0)
        {
            instruct[i].f(head, line_number);
            break;
        }

    }
    exit(EXIT_FAILURE);
}
