#include "monty.h"

/**
* ppo_add - function that add nod at top
* @lin_num:- number lin
* @head: head of the list
* Return: Always 0
*/

void ppo_add(stack_t **head, unsigned int lin_num)
{
stack_t *today;
int x = 0;

if (*head && (*head)->next)
{
today = *head;
x = today->n + today->next->n;
today->next->n = x;
free(today);
*head = (*head)->next;
}
else
{
error_handle(8, lin_num, "monty work");
}
}
