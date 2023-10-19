#include "monty.h"

#include <ctype.h>
int _digit(char *string);

/**
* push_chck - commandlines push check
* @dn:- number line
* @tak:- user input
* Return:- Always 0
*/

void push_chck(char **tok, unsigned int dn)
{

if (strcmp(tok[0], "push") == 0 && tok[1])
{
if (_digit(tok[1]) == 0)
{
n = atoi(tok[1]);
}
else
{
error_handle(4, dn, "monty work");
}
}
else if (strcmp(tok[0], "push") == 0 && !tok[1])
{
error_handle(4, dn, "monty work");
}
}

/**
* _digit - check weather input is number
* @string:- input
* Return: Alwaya 0
*/

int _digit(char *string)
{
unsigned long d = 0;

if (string[0] == '-')
{
d++;
}

while (d < strlen(string))
{
if (isdigit(string[1]) == 0)
{
return (1);
}
d++;
}
if (string[0] == '-' && strlen(string) == 1)
{
return (1);
}
return (0);
}

/**
* ppo_print - display list head
* @lin_num:- lin num
* @head:- list head
* Return:- always 0
*/

void ppo_print(stack_t **head, unsigned int lin_num)
{
if (*head == NULL)
{
error_handle(5, lin_num, "monty work");
}
printf(" % d\n", (*head)->n);
}
