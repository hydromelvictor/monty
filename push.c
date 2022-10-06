#include "monty.h"

/**
 * _isdigit - verifie
 * @str: string
 * Return: int
 */
int _isdigit(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '-' && i == 0)
            continue;
        if (isdigit(str[i] == 0))
            return (-1);
    }
    return (1);
}

/**
 * push - data saving
 *
 * @stack: data structure
 * @line_number: data
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *new = malloc(sizeof(stack_t)), *current;
char *arg;
if (new == NULL)
{
dprintf(STDERR_FILENO, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
arg = strtok(NULL, " \n\t\r");
if (arg == NULL || _isdigit(arg) == -1)
{
dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
new->n = atoi(arg);
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
