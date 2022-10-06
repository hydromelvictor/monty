#include "monty.h"

void mul(stack_t **stack, unsigned int line_number)
{
    stack_t *current, *sum;
    current = *stack;
    if (*stack == NULL || current->next == NULL)
    {
        dprintf(STDERR_FILENO, "L%u: can't mul, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    sum = current->next;
    sum->n = sum->n * current->n;
    pop(stack, line_number);
}
