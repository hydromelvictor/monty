#include "monty.h"

void execute(char *str, stack_t **stack, unsigned int line_number)
{
    instruction_t op[] = {
        {"push", push},
        {"pall", pall},
        {NULL, NULL}
    };

    int i;

    for (i = 0; op[i].opcode != NULL; i++)
    {
        if (strcmp(op[i].opcode,str) == 0)
        {
            op[i].f(stack, line_number);
            return;
        }
    }
    fprintf(stderr, "L%u: unknown instruction %s\n", line_number, str);
    exit(EXIT_FAILURE);
}
