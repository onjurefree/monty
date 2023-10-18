#include "monty.h"

/**
* ppo_nop - diplays elements of list
* @lin_num:- num lines
* @head:- list head
* Return:- Always 0
*/

void ppo_nop(stack_t **head, unsigned int lin_num)
{
int d = 1;

(void)head;
(void)lin_num;

while (d >= 0)
{
d++;
continue;
}
}

/**
* stack_free - freeing lists
* @head:- list head
* Return:- Always 0
*/

void stack_free(stack_t *head)
{
stack_t *nw;


while (head)
{
nw = head;
head = head->next;
free(nw);
}
free(head);
}
