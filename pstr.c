#include "monty.h"
#include <stdlib.h>

void pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
    stack_t *current;

    if (*stack == NULL)
    {
        printf("\n");
        exit(EXIT_SUCCESS);
    }
        
    current = *stack;
    while (current != NULL)
    {
        if (current->n == 0 || current->n < 0 || current->n > 127)
            exit(EXIT_SUCCESS);
        
        putchar(current->n);
        current = current->next;
    }
}
