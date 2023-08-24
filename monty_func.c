#include "monty.h"

void monty_func(char *str)
{
    char *line = NULL;
    size_t l = 0;
    ssize_t char_read;
    char **strings = NULL;
    int j;
    unsigned int line_number = 1;
    stack_t *stack = NULL;


    FILE *file = fopen(str, "r");
    if (file == NULL)
    {
        dprintf(2, "Error: Can't open file %s\n", str);
        exit(EXIT_FAILURE);
    }

    while ((char_read = getline(&line, &l, file)) != -1)
    {
        strings = handl_strtok(line);
        j = 0;
        while (strings[j] != NULL)
        {
            printf("%s\n", strings[j]);
            j++;
        }
        if (strings[1])
        {
            n = atoi(strings[1]);
        }
        
        opcode_exec(strings[0], &stack, line_number);
        line_number++;
        printf("line number = %d\n", line_number);
        free_str(strings);
    }
    free(line);
    free_stack(stack);       
    fclose(file);
}
