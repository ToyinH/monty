#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern int n;


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void monty_func(char *str);
char **handl_strtok(char *strline);
void free_str(char **str);
void opcode_exec(char **str, stack_t **head, unsigned int line_number);
void opcode_push(stack_t **h, unsigned int line_number);
void opcode_pall(stack_t **h, unsigned int line_number);
void opcode_pint(stack_t **h, unsigned int line_number);
void opcode_pop(stack_t **h, unsigned int line_number);
void opcode_swap(stack_t **h, unsigned int line_number);
void opcode_add(stack_t **h, unsigned int line_number);
void opcode_nop(stack_t **h, unsigned int line_number);
void opcode_sub(stack_t **h, unsigned int line_number);
void opcode_div(stack_t **h, unsigned int line_number);
void opcode_mul(stack_t **h, unsigned int line_number);
void opcode_mod(stack_t **h, unsigned int line_number);
void opcode_pchar(stack_t **h, unsigned int line_number);
void opcode_pstr(stack_t **h, unsigned int line_number);
void opcode_rotl(stack_t **h, unsigned int line_number);
void opcode_rotr(stack_t **h, unsigned int line_number);
void free_stack(stack_t *head);
int isspace_str(char *str);
void check_push(char **str, unsigned int line_number);
int len(stack_t *h);



#endif
