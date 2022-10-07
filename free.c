#include "monty.h"

/**
 * _free - free for list
 * @stack: list begin
 */
void _free(stack_t **stack)
{
stack_t *current = *stack;
while (current != NULL)
{
*stack = current->next;
free(current);
current = *stack;
}
current = NULL;
}
