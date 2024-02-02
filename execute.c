#include "monty.h"

/**
 * execute - function to execute the opcode
 * @content: line content
 * @stack: head linked list representing the stack
 * @counter: line counter
 * @file: pointer to the monty file
 * Return: no return value
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
    instruction_t opcodes[] = {
        {"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
        {"pop", f_pop},
        {"swap", f_swap},
        {"add", f_add},
        {"nop", f_nop},
        {"sub", f_sub},
        {"div", f_div},
        {"mul", f_mul},
        {"mod", f_mod},
        {"pchar", f_pchar},
        {"pstr", f_pstr},
        {"rotl", f_rotl},
        {"rotr", f_rotr},
        {"queue", f_queue},
        {"stack", f_stack},
        {NULL, NULL}
    };

    unsigned int i = 0;
    char *opcode;

    opcode = strtok(content, " \n\t");
    if (opcode && opcode[0] == '#')
        return (0);

    bus.arg = strtok(NULL, " \n\t");

   

