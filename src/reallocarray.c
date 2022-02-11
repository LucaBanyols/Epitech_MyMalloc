/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** realloc array gestion
*/

#include <stddef.h>
#include "malloc.h"

void *reallocarray(void *ptr, size_t nmemb, size_t size)
{
    if (ptr == NULL || nmemb == 0 || size == 0)
        return NULL;
    return (realloc(ptr, nmemb * size));
}
