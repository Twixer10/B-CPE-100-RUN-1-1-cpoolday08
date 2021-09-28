/*
** EPITECH PROJECT, 2020
** MY STR N CAT
** File description:
** NO DESCRIPTION
*/

int my_strlen(char const *str);

char *my_strncat(char *dest , char  const *src , int nb)
{
    int i = 0;
    int j = my_strlen(dest);

    while(src[i] && i < nb)
    {
        dest[j + i] = src[i];
        i = i + 1;
    }
    return (dest);
}
