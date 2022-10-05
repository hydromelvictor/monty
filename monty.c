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
    unsigned int i = 1;
    FILE *fd = NULL;
    char *str = NULL, *arg;
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

    while (getline(&str, &n, fd) != -1)
    {
        arg = strtok(str, " \n\t\r$");
        execute(arg, &stack, i);
        i++;
    }
    fclose(fd);
    return (0);
}
