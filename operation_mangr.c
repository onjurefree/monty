#include "monty.h"

/**
* gett_op - function that gets op
* @v:- str of chr
* @cont:- records ints
* Return:- Always 0
*/
void (*gett_op(char *v, unsigned int cont))(stack_t **stack, unsigned int w)

{
int x;
instruction_t ops[] = {
{"push", ppo_push},
{"pall", ppo_pall},
{"pint", ppo_print},
{"pop", ppo_pop},
{"swap", ppo_swap},
{"add", ppo_add},
{"nop", ppo_nop},
{"sub", ppo_sub},
{"div", ppo_div},
{"mul", ppo_mul},
{"mod", ppo_mod},
{"pchar", ppo_pchar},
{"pstr", ppo_pstr},
{"rotl", ppo_rotl},
{"rotr", ppo_rotr},
{NULL, NULL}
};
x = 0;

if (v && v[0] != '#')
{
while (ops[x].opcode != NULL)
{
if (strcmp(ops[x].opcode, v) == 0)
{
return (ops[x].f);
}
x++;
}
error_handle(3, cont, v);
return (NULL);
}
else
{
return (ops[6].f);
}
}
