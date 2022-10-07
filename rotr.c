#include "monty.h"

/**
 * rotr - permutation first and last place
 * @stack: begin
 * @line_number: line
 */
void rotr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *current, *post;
current = *stack;
if (*stack == NULL || current->next == NULL)
{
return;
}
post = current->next;
while (post->next != NULL)
{
post = post->next;
}
post->next = current;
post->prev->next = NULL;
post->prev = NULL;
current->prev = post;
*stack = post;
}
