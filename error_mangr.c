#include "monty.h"

void mini_error_handle(int flg, unsigned int lin_num);

/**
* error_handle - error checker
* @pme:- file name
* @lin_num: error lin
* @flg:- error flg
* Return:- Always 0
*/

void error_handle(int flg, unsigned int lin_num, char *pme)
{

if (flg == 1)

{
fprintf(stderr, "Error: malloc failed\n");
}

else if (flg == 2)

{
fprintf(stderr, "error: Can't open file %s\n", pme);
}

else if (flg == 3)

{
fprintf(stderr, "L%u: unknown instruction %s\n", lin_num, pme);
}

else if (flg == 4)

{
fprintf(stderr, "L%u: usage: push integer\n", lin_num);
}

else if (flg == 5)

{
fprintf(stderr, "L%u: can't pint, stack empty\n", lin_num);
}

else if (flg == 6)

{
fprintf(stderr, "L%u: can't pop an empty stack\n", lin_num);
}

else if (flg == 7)

{
fprintf(stderr, "L%u: can't swap, stack too short\n", lin_num);
}

else if (flg == 8)

{
fprintf(stderr, "L%u: can't add, stack too short\n", lin_num);
}

else if (flg == 9)

{
fprintf(stderr, "L%u: can't sub, stack too short\n", lin_num);
}

else if (flg == 10)

{
fprintf(stderr, "L%u: can't div, stack too short\n", lin_num);
}

else

{
mini_error_handle(flg, lin_num);
}

freeing_lst(&tok_get);
stack_free(list);
free(tokens);

if (flg != 2)
{
fclose(fp);
}
exit(EXIT_FAILURE);
}

/**
* mini_error_handle - checking error
* @lin_num:- error lin
* @flg:- Error flg
* Return:- always 0
*/

void mini_error_handle(int flg, unsigned int lin_num)
{

if (flg == 11)

{
fprintf(stderr, "L%u: division by zero\n", lin_num);
}

else if (flg == 12)

{
fprintf(stderr, "L%u: can't mul, stack too short\n", lin_num);
}

else if (flg == 13)

{
fprintf(stderr, "L%u: can't mod, stack too short\n", lin_num);
}

else if (flg == 14)

{
fprintf(stderr, "L%u: division by zero\n", lin_num);
}

else if (flg == 15)

{
fprintf(stderr, "L%u: can't pchar, value out of range\n", lin_num);
}

else if (flg == 16)

{
fprintf(stderr, "L%u: can't pchar, stack empty\n", lin_num);
}

else if (flg == 16)

{
fprintf(stderr, "USAGE: monty file\n");
}

freeing_lst(&tok_get);
stack_free(list);
free(tokens);

if (flg != 0)

{
fclose(fp);
}

exit(EXIT_FAILURE);
