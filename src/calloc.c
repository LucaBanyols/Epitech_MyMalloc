/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** calloc gestion
*/

#include <stddef.h>
#include "malloc.h"

void *calloc(size_t nmemb, size_t size)
{
    void *ptr = malloc(nmemb * size);
    char *tmp = NULL;

    if (ptr == NULL)
        return NULL;
    tmp = ptr;
    for (size_t count; count < size; count++, tmp++)
        *tmp = 0;
    return (ptr);
}
