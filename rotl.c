#include "monty.h"

void rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
    stack_t *current, *del;

    del = *stack;
    current = del->next;

    if (*stack == NULL || del->next == NULL)
        return;

    *stack = current;
    current->next->prev = NULL;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = del;
    del->next = NULL;
    del->prev = current;
}
