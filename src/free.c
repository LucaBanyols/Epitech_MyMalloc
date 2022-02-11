/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** free
*/

#include <unistd.h>
#include <stdlib.h>
#include "malloc.h"

void free(void *ptr)
{
    block_t *block = NULL;

    if (ptr == NULL)
        return;
    block = ptr - sizeof(block_t);
    block->status = true;
}
