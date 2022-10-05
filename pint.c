#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void pint(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
    stack_t *top;
    if (*stack == NULL)
    {
        dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    top = *stack;
    printf("%d\n", top->n);
}
