#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * pint - print first value
 * @stack: pile begin
 * @line_number: line
 */
void pint(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
