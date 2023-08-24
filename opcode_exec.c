#include "monty.h"

void opcode_exec(char *opcode, stack_t **head, unsigned int line_number)
{
    unsigned int i;
    int valid_instruction_found;

    instruction_t instruct[] = {
        {"push", opcode_push},
        {"pall", opcode_pall},
        {"pint", opcode_pint},
        {"pop", opcode_pop},
        {"swap", opcode_swap},
	{"add", opcode_add}
    };

    valid_instruction_found = 0;
    for (i = 0; i < sizeof(instruct) / sizeof(instruct[0]); i++)
    {
        if (strcmp(instruct[i].opcode, opcode) == 0)
        {
            instruct[i].f(head, line_number);
	    valid_instruction_found = 1;
            break;
        }

    }
    if (!valid_instruction_found)
    {
	    dprintf(2, "L%d: unknown instruction %s\n", line_number, opcode);
	    exit(EXIT_FAILURE);
    }
}
