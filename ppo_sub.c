#include "monty.h"

/**
* ppo_sub - function that removes elements
* @lin_num:- lin num
* @head:- list head
* Return:- Always
*/

void ppo_sub(stack_t **head, unsigned int lin_num)
{
stack_t *today;
int x = 0;


if (*head && (*head)->next)
{
today = *head;
x = today->next->n - today->n;
today->next->n = x;
today->next->prev = NULL;
*head = (*head)->next;
free(today);
}
else
{
error_handle(9, lin_num, "monty work");
}
}
