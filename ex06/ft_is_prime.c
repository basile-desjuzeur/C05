
/* nb : we could have taken srqt(nb) as a superior limit*/
int ft_is_prime(int nb)
{
    int i;

    i = 2;
    while (i < nb - 1)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}