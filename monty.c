#include "monty.h"

int status = STACK;
/**
 * main - monty programme main
 *
 * @argc: main parameter count
 * @argv: main parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
size_t n = 0;
unsigned int i;
FILE *fd = NULL;
char *lineptr = NULL, *arg = NULL;
stack_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
fd = fopen(argv[1], "r");
if (fd == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
for (i = 1; getline(&lineptr, &n, fd) != -1; i++)
{
arg = strtok(lineptr, " \n\t\r");
if (arg != NULL && arg[0] != '#')
{
if (strcmp(arg, "queue") == 0 || strcmp(arg, "stack") == 0)
{
status = (strcmp(arg, "queue") == 0) ? QUEUE : STACK;
continue;
}
execute(arg, &stack, i);
}
}
free(lineptr);
fclose(fd);
_free(&stack);
return (0);
}
