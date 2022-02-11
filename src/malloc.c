/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** malloc gestion
*/

#include <unistd.h>
#include <stddef.h>
#include "malloc.h"

block_t *define_block(size_t a_size, size_t p_size)
{
    block_t *block = NULL;

    if (block == NULL) {
        p_size = (sizeof(block_t) + a_size - 1) / p_size * p_size + p_size;
        if ((block = sbrk(p_size)) == NULL)
            return NULL;
        block->first = NULL;
        block->size = a_size;
        block->status = true;
        block->size = p_size - sizeof(block_t);
    }
    return (block);
}

void *malloc(size_t size)
{
    block_t *block = NULL;
    size_t aligned_size = 0;
    size_t page_size = getpagesize();

    if (size == 0)
        return NULL;
    aligned_size = (size - 1) / 8 * 8 + 8;
    if ((block = define_block(aligned_size, page_size)) == NULL)
        return NULL;
    return ((void *) block + sizeof(block_t));
}
