#include "monty.h"

/**
 * pall - printer function
 * @stack: stack begin
 * @line_number: line
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
int i;
(void)line_number;

for (i = 0; current != NULL; i++)
{
printf("%d\n", current->n);
current = current->next;
}
}
