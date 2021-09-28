/*
** EPITECH PROJECT, 2020
** MY STR TO WORD ARRAY
** File description:
** NO DESCRIPTION
*/

#include "./include/my.h"
#include <stdlib.h>

int my_str_isalphanum(char c)
{
    if (c > 48 && c < 57)
        return (1);
    else if ((c > 64 && c < 91) || (c > 96 && c < 123))
        return (1);
    else
        return (0);
}

int count_all_words(char const *str)
{
    int i = 0;
    int to_return = 0;

    while (str[i]) {
        if (my_str_isalphanum(str[i]) == 1)
            to_return = to_return + 1;
        while (str[i] && my_str_isalphanum(str[i]) == 1)
            i = i + 1;
        if (str[i])
            i = i + 1;
    }
    return (to_return);
}

int get_len_of_word(char const *str, int k)
{
    int len = 0;

    while (my_str_isalphanum(str[k]) == 1) {
        k = k + 1;
        len = len + 1;
    }
    return (len);
}

char **my_str_to_word_array(char const *str)
{
    char **array = malloc(sizeof(char *) * (count_all_words(str) + 1));
    int i = 0;
    int j = 0;
    int k = 0;

    while (i != count_all_words(str)) {
        k = 0;
        while (my_str_isalphanum(str[j]) == 0)
            j = j + 1;
        array[i] = malloc(sizeof(char) * (get_len_of_word(str, j) + 1));
        while (my_str_isalphanum(str[j]) == 1) {
            array[i][k] = str[j];
            k = k + 1;
            j = j + 1;
        }
        array[i][k] = '\0';
        i += 1;
    }
    array[i] = NULL;
    return (array);
}
