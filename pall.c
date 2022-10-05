#include "monty.h"

/**
 * pall - printer function
 * 
 */
void pall(stack_t **stack , unsigned int line_number __attribute__((unused)))
{
    stack_t *current = *stack;
    int i;
    
    if(*stack == NULL)
        return;

    for (i = 0; current != NULL; i++)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
