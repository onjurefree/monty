#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define DELIM "\t\n "
#define BUFFSIZE 1024
/**
* struct stacks_s - doubly linked list presentation of a stack (or queue)
* @n: integer
* @prev: point to the previous element of the stack (or queue)
* @next: point to the next element of the stack (or queue)
*
* Description: doubly linked lists node structure
* for stack, queues, LIFO, FIFO
*/

typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next; 
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Decription: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct insctuction_s
{

char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct used_memory -struct for memory
* @data:- data
* @next: ptr for next node
* Desciption:- stack that keep track of used memeory
*/

typedef struct used_memory
{
char *data;
struct used_memory *next;
} used_m;

extern int n;
int n;

extern FILE *fp;
FILE *fp;

extern stack_t *list;
stack_t *list;

extern used_m *tok_get;
used_m *tok_get;

extern char **tokens;
char **tokens;


void ppo_print(stack_t **head, unsigned int lin_num);
void ppo_push(stack_t **list_add, unsigned int lin_num);
void ppo_swap(stack_t **head, unsigned int lin_num);
void ppo_sub(stack_t **head, unsigned int lin_num);
void ppo_mod(stack_t **head, unsigned int lin_num);
void ppo_div(stack_t **head, unsigned int lin_num);
void ppo_pstr(stack_t **head, unsigned int lin_num);
void ppo_pchar(stack_t **head, unsigned int lin_num);
void ppo_add(stack_t **head, unsigned int lin_num);
void ppo_mul(stack_t **head, unsigned int lin_num);
void ppo_pall(stack_t **head, unsigned int lin_num);
void ppo_pop(stack_t **head, unsigned int lin_num);
void ppo_nop(stack_t **head, unsigned int lin_num);

void stack_free(stack_t *head);
void (*gett_op(char *v, unsigned int cont))(stack_t **stack, unsigned int w);
void freeing_lst(used_m **head);
void adding_nod(char *string);
char **persing_lin(char *zin);
void *_realloc (void *pointer, unsigned int pld, unsigned int newb);
void error_handle(int flg, unsigned int lin_num, char *pme);
void push_chck(char **tak,unsigned int dn);

void ppo_rotl(stack_t **start, unsigned int lin_num);
void ppo_rotr(stack_t **start, unsigned int lin_num);


#endif
