#include "monty.h"

void *_realloc(void *pointer, unsigned int pld, unsigned int newb);
/**
* _realloc - function that allocates mem
* @newb:- new size
* @pld:- pld size
* @pointer:- ptr to alocate
* Return:- Always 0
*/

void *_realloc(void *pointer, unsigned int pld, unsigned int newb)
{
unsigned int x = 0;
void *nw_ptr;

if (pld == newb)
{
return (pointer);
}

if (pointer != NULL && newb == 0)
{
free(pointer);
return (NULL);
}

nw_ptr = malloc(newb);
if (!nw_ptr)
{
return (NULL);
}
while (x < pld)
{
*((char *)nw_ptr + x) = *((char *)pointer + x);
x++;
}
free(pointer);
return (nw_ptr);
}

/**
* persing_lin - function that tokens hrgs
* @zin:- ptr to hrgs
* Return:- Always 0
*/

char **persing_lin(char *zin)
{
int loco = 0;
char *tok, **dobtok;
int buff_size = BUFFSIZE;

dobtok = malloc(sizeof(char *) * 3);
if (dobtok == NULL)
exit(EXIT_FAILURE);

tok = strtok(zin, DELIM);
while (loco < 2)
{
dobtok[loco] = tok;
tok = strtok(NULL, DELIM);
loco++;
}
if (loco >= buff_size)
{
buff_size = buff_size + BUFFSIZE;
dobtok = _realloc(dobtok, BUFFSIZE, buff_size *sizeof(char *));

if (dobtok == NULL)
{
{
exit(EXIT_FAILURE);
}
}
tok = strtok(NULL, DELIM);
}
dobtok[loco] = NULL;

return (dobtok);
}
