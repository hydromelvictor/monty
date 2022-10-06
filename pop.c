#include "monty.h"
#include <stdio.h>

void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *del;

    if (*stack == NULL)
    {
        dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    del = *stack;
    *stack = del->next;

    if (del->next != NULL)
        del->next->prev = NULL;
        
    free(del);
}
