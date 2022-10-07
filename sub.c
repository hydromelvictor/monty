#include "monty.h"

/**
 * _sub - permutation first and last place
 * @stack: begin
 * @line_number: line
 */
void _sub(stack_t **stack, unsigned int line_number)
{
stack_t *current, *sum;
current = *stack;
if (*stack == NULL || current->next == NULL)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
sum = current->next;
sum->n = sum->n - current->n;
pop(stack, line_number);
}
