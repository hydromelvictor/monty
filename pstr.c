#include "monty.h"
#include <stdlib.h>

/**
 * pstr - permutation first and last place
 * @stack: begin
 * @line_number: line
 */
void pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *current;
current = *stack;
while (current != NULL)
{
if (current->n > 0 && current->n <= 127)
{
putchar(current->n);
}
else
{
return;
}
current = current->next;
}
putchar('\n');
}
