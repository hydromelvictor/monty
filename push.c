#include "monty.h"

/**
 * _isdigit - verifie
 * @str: string
 * Return: int
 */
int _isdigit(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == '-' && i == 0)
{
continue;
}
if (isdigit(str[i]) == 0)
{
return (-1);
}
}
return (1);
}

/**
 * push - data saving
 *
 * @stack: data structure
 * @line_number: data
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *new = malloc(sizeof(stack_t)), *current;
char *arg;
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
arg = strtok(NULL, " \n\t\r");
if (arg == NULL || _isdigit(arg) == -1)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
free(new);
exit(EXIT_FAILURE);
}
new->n = atoi(arg);
new->prev = NULL;
if (*stack == NULL)
{
new->next = NULL;
*stack = new;
return;
}
current = *stack;
new->next = current;
current->prev = new;
*stack = new;
}

/**
 * _push - push for queue
 * @stack: begin
 * @line_number: line
 */
void _push(stack_t **stack, unsigned int line_number)
{
stack_t *new = malloc(sizeof(stack_t)), *current;
char *arg;
if (new == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
arg = strtok(NULL, " \n\t\r");
if (arg == NULL || _isdigit(arg) == -1)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
free(new);
exit(EXIT_FAILURE);
}
new->n = atoi(arg);
new->next = NULL;
if (*stack == NULL)
{
new->prev = NULL;
*stack = new;
return;
}
current = *stack;
while (current->next != NULL)
{
current = current->next;
}
current->next = new;
new->prev = current;
}

/**
 * pusher - push for queue or stack
 * @stack: begin
 * @line_number: line
 */
void pusher(stack_t **stack, unsigned int line_number)
{
if (status == STACK)
{
push(stack, line_number);
}
else
{
_push(stack, line_number);
}
}
