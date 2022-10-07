#include "monty.h"
#include <stdio.h>

/**
 * pop - remove first element the list
 * @stack: list begin
 * @line_number: line
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *del;
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
del = *stack;
*stack = del->next;
if (del->next != NULL)
{
del->next->prev = NULL;
}
free(del);
}
