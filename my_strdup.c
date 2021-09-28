/*
** EPITECH PROJECT, 2020
** MY STR DUP
** File description:
** NO DESCRIPTION
*/

#include "./include/my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int len  = my_strlen(src) + 1;
    char *c = malloc(len);

    my_strcpy(c, src);
    c[len - 1] = '\0';
    return (c);
}
