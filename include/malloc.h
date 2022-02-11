/*
** EPITECH PROJECT, 2021
** malloc
** File description:
** header
*/

#ifndef MALLOC_H_
#define MALLOC_H_

#include <stdbool.h>
#include <stddef.h>

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);

typedef struct block_s
{
    struct block_s *first;
    struct block_s *next;
    bool status;
    size_t size;
} block_t;

#endif
