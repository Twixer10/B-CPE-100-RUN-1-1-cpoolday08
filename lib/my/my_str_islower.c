/*
** EPITECH PROJECT, 2020
** MY STR IS LOWER
** File description:
** NO DESCRIPTION
*/

int my_str_islower(char const *str)
{
    int i = 0;
    while (str[i]) {
        if (!(str[i] >= 97 && str[i] <= 122))
            return (0);
        i = i + 1;
    }
    return (1);
}
