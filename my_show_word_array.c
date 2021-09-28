/*
** EPITECH PROJECT, 2020
** MY SHOW WORD ARRAY
** File description:
** NO DESCRIPTION
*/

#include "./include/my.h"

int my_show_word_array(char *const *tab)
{
    int i = 0;
    int j = 0;
    
    while (tab[i]) {
        while (tab[i][j]) {
            my_putchar(tab[i][j]);
            j = j + 1;
        }
        my_putchar('\n');
        j = 0;
        i = i + 1;
    }
    return (0);
}
