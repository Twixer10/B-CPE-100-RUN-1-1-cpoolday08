/*
** EPITECH PROJECT, 2020
** My Find Prime Sup
** File description:
** No description
*/
int my_is_prime(int i);

int my_find_prime_sup(int nb)
{
    int j = 1;
    while (j == 1)
    {
        nb = nb + 1;
        if (my_is_prime(nb) == 1)
            return (nb);
    }
    return (0);
}
