#include "monty.h"

void mod(stack_t **stack, unsigned int line_number)
{
    stack_t *current, *sum;
    current = *stack;
    if (*stack == NULL || current->next == NULL)
    {
        fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (current->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }
    sum = current->next;
    sum->n = sum->n % current->n;
    pop(stack, line_number);
}
