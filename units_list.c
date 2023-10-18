#include "monty.h"

/**
* ppo_pall - elements display
* @lin_num:- num lines
* @head:- list head
* Return:- Always 0
*/
void ppo_pall(stack_t **head, unsigned int lin_num)
{
int d = 0;

stack_t *now = list;

(void)lin_num;
(void)head;


while (now != NULL)
{
printf("%d\n", now->n);
now = now->next;
d++;
}
}
