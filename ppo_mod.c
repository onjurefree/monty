#include "monty.h"

/**
* ppo_mod - function that mod top element of list
* @lin_num:- num line
* @head:- head of the list
* Return:- Always 0
*/

void ppo_mod(stack_t **head, unsigned int lin_num)
{
int x = 0;
stack_t *today;

if (*head != NULL && (*head)->next)
{

if ((*head)->n == 0)
{
error_handle(14, lin_num, "monty work");
}

today = *head;
x = today->next->n % today->n;
today->next->n = x;
today->next->prev = NULL;
*head = (*head)->next;
free(today);
}
else
{
error_handle(13, lin_num, "monty work");
}
}
