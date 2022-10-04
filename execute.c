#include "monty.h"
#include <ctype.h>

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
        if (op[i].opcode == str)
        {
            op[i].f(stack, line_number);
            return;
        }
    }
    fprintf(stderr, "L%u: unknown instruction %s\n", line_number, str);
    exit(EXIT_FAILURE);
}
