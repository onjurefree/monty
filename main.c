#include <stdio.h>
#include "monty.h"

#include <fcntl.h>
#include <ctype.h>

/**
* adding_nod - adding nod
* @string:- start of stack
* Return:- Alway 0
*/

void adding_nod(char *string)
{
used_m *nw;
nw = malloc(sizeof(used_m));
if (nw == NULL)
{
exit(EXIT_FAILURE);
}
nw->data = string;
nw->next = tok_get;
tok_get = nw;
}

/**
* freeing_lst - freeing lists
* @head:- start of the list
* Return:- Always 0
*/

void freeing_lst(used_m **head)
{
used_m *nw;
unsigned int d = 0;

if (*head)
{
while (*head)
{
nw = *head;
*head = (*head)->next;
if (nw->data != NULL)
{
free(nw->data);
}
free(nw);
d++;
}
}
}

/**
* main - entry point
* @hrgc:- hrgs count
* @hrgv: ptr to hrgs
* Return:- always 0
*/

int main(int hrgc, char **hrgv)
{
ssize_t d = 0, w = 1;
size_t buffsiz = 1024;
unsigned int cont = 1;
char *zin = NULL;
void (*func)(stack_t **, unsigned int);

fp = NULL;
if (hrgc != 2)
error_handle(0, cont, hrgv[1]);
fp = fopen(hrgv[1], "r");
if (fp == NULL)
error_handle(2, cont, hrgv[1]);
tokens = NULL;
while (w == 1)
{
zin = NULL;
d = getline(&zin, &buffsiz, fp);
adding_nod(zin);
if (d != -1 && zin[0] == '#')
{
cont++;
continue;
}
if (d != -1)
{
tokens = persing_lin(zin);
func = gett_op(tokens[0], cont);
if (tokens[0])
push_chck(tokens, cont);
func(&list, cont), free(tokens);
}
else
w = 0;
cont++;
}
fclose(fp);
freeing_lst(&tok_get), stack_free(list);
return (0);
}
