#include "monty.h"
#include <string.h>

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
    unsigned int i = 1;
    FILE *fd = NULL;
    char *str, *arg[] = {NULL, NULL}, *lineptr = NULL;
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

    for (i = 0; getline(&lineptr, &n, fd) != -1; i++)
    {
        str = strtok(str, "\n\t\r");
        arg[0] = strtok(str, "\n\t\r");
        arg[1] = strtok(NULL, "\n\t\r");
        execute(arg[0], &stack, atoi(arg[1]));
    }
    fclose(fd);
    return (0);
}
