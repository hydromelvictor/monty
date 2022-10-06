#include "monty.h"

/**
 * execute - execution function
 *
 * @stack: stack begin
 * @line_number: line
 */
void execute(stack_t **stack, unsigned int line_number)
{
instruction_t op[] = {
{"push", push}, {"pall", pall}, {"pint", pint},
{"pop", pop}, {"swap", swap}, {"add", add},
{"nop", nop}, {"sub", _sub}, {"div", _div},
{"mod", mod}, {"pchar", pchar}, {"pstr", pstr},
{"rotl", rotl}, {"rotr", rotr}, {"mul", mul},
{NULL, NULL}
};
int i;
run.func = strtok(run.line, " \n\t\r");
if (run.func == NULL)
{
return;
}
for (i = 0; op[i].opcode != NULL; i++)
{
if (strcmp(op[i].opcode, run.func) == 0)
{
op[i].f(stack, line_number);
return;
}
}
dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", line_number, run.func);
exit(EXIT_FAILURE);
}
