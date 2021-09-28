/*
** EPITECH PROJECT, 2020
** My Get Nbr
** File description:
** 
*/
void my_putnbr(int i);

int my_getnbr(char *str)
{
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < '0' || str[i] > '9' ) || str[0] == '-')
            if (str[0] == '-')
                return (j * -1);
            else
                return (j);
        j = j * 10;
        j = j + (str[i] - 48);
        i = i + 1;
    }
    if (str[0] == '-')
        return (j * -1);
    else
        return (j);
}
