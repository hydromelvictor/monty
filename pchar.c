#include "monty.h"

/**
 * pchar - permutation first and last place
 * @stack: begin
 * @line_number: line
 */
void pchar(stack_t **stack, unsigned int line_number)
{
stack_t *current;
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
current = *stack;
if (current->n < 0 || current->n > 127)
{
fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
}
putchar(current->n);
putchar('\n');
}
