#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * push - data saving
 *
 * @stack: data structure
 * @line_number: data
 */
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new = malloc(sizeof(stack_t)), *current;
    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    run.arg = strtok(NULL, " ");
    if (run.arg == NULL || _isdigit(run.arg) == -1)
    {
        fprintf(stderr, "L%u: usage: push integer", line_number);
        exit(EXIT_FAILURE);
    }
    new->n = atoi(run.arg);
    new->prev = NULL;
    if (*stack == NULL)
    {
        new->next = NULL;
        *stack = new;
        return;
    }
    current = *stack;
    new->next = current;
    current->prev = new;
    *stack = new;
}
