#include "monty.h"

void add(stack_t **stack, unsigned int line_number)
{
    stack_t *current, *sum;
    current = *stack;
    if (stack == NULL || current->next == NULL)
    {
        dprintf(STDERR_FILENO, "L%u: can't swap, stack too short", line_number);
        exit(EXIT_FAILURE);
    }

    sum = current->next;
    sum->n = current->n + sum->n;
    pop(stack, line_number);
}
