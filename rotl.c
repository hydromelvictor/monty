#include "monty.h"

/**
 * rotl - permutation first and last place
 * @stack: begin
 * @line_number: line
 */
void rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *current, *del;
del = *stack;

    if (*stack == NULL || del->next == NULL)
        return;
        
current = del->next;
    *stack = current;
    if (current->next != NULL)
        current->next->prev = NULL;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = del;
    del->next = NULL;
    del->prev = current;
}
