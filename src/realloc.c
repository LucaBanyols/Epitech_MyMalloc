/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** realloc
*/

#include <string.h>
#include "malloc.h"

void *realloc(void *ptr, size_t size)
{
    void *new = malloc(size);
    char *str_ptr = ptr;
    char *str_new = new;

    if (new == NULL || size <= 0)
        return (NULL);
    if (ptr == NULL)
        return (malloc(size));
    for (size_t count = 0; count < 1024; count++, str_ptr++, str_new++)
        *str_new = *str_ptr;
    memcpy(new, ptr + sizeof(block_t) + size, size);
    return (new);
}
