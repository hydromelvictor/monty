#include "monty.h"
#include <stddef.h>

int _isdigit(char *str)
{
    size_t i;
    for (i = 0; i < strlen(str); i++)
        if (isdigit(str[i]) <= 0)
            return (-1);

    return (1);
}
