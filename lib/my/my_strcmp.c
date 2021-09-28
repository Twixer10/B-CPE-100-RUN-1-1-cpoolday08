/*
** EPITECH PROJECT, 2020
** MY STRCMP
** File description:
** No description
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    	
    while (s1[i]) {
        if (s1[i] != s2[i])
            return ((s2[i] - s1[i]) * (-1));
        i = i + 1;
    }
    return (0);
}
