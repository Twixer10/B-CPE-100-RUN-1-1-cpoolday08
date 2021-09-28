/*
** EPITECH PROJECT, 2020
** My Compute Power Rec
** File description:
** No description
*/
int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    int i = 1;
    i = nb * my_compute_power_rec(nb, (p - 1));
    return (i);
}
