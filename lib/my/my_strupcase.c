/*
** EPITECH PROJECT, 2020
** MY STR UP CASE
** File description:
** NO DESCRIPTION
*/

char *my_strupcase(char *str)
{
    int i = 0;
    
    while (str[i]) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        i = i + 1;
    }
    return (str);
}
