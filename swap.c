#include "monty.h"

/**
 * swap - permutation first and last place
 * @stack: begin
 * @line_number: line
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *current, *permute;
current = *stack;
if (*stack == NULL || current->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
permute = current->next;
*stack = permute;
permute->prev = NULL;
current->next = permute->next;
permute->next = current;
}
