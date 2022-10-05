#include "monty.h"

void execute(stack_t **stack, unsigned int line_number)
{
    instruction_t op[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}
    };
    int i;

    run.func = strtok(run.line, " ");

    for (i = 0; op[i].opcode != NULL; i++)
    {
        if (strcmp(op[i].opcode, run.func) == 0)
        {
            op[i].f(stack, line_number);
            return;
        }
    }
    fprintf(stderr, "L%u: unknown instruction %s", line_number, run.func);
    exit(EXIT_FAILURE);
}
