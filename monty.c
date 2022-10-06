#include "monty.h"

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
dprintf(STDERR_FILENO, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
fd = fopen(argv[1], "r");
if (fd == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
for (i = 1; getline(&lineptr, &n, fd) != -1; i++)
{
arg = strtok(lineptr, " \n\t\r");
if (arg != NULL && arg[0] != '#')
{
execute(arg, &stack, i);
}
}
fclose(fd);
return (0);
}
