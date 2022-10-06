#include "monty.h"

void add(stack_t **stack, unsigned int line_number)
{
    stack_t *current, *sum;
    current = *stack;
    if (*stack == NULL || current->next == NULL)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    sum = current->next;
    sum->n = current->n + sum->n;
    pop(stack, line_number);
}
