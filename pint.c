#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void pint(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
    stack_t *top;
    if (*stack == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty", line_number);
        exit(EXIT_FAILURE);
    }
    top = *stack;
    printf("%d\n", top->n);
}
