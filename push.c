#include "monty.h"
#include <stdio.h>

/**
 * push - data saving
 *
 * @stack: data structure
 * @line_number: data
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new->n = line_number;
    new->prev = NULL;

    if (*stack == NULL)
    {
        new->next = NULL;
        *stack = new;
        return;
    }
    new->next = *stack;
    *stack = new;
}
