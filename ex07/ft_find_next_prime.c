int ft_is_prime(int nb);

int ft_find_next_prime(int nb)
{
    nb++;
    while (ft_is_prime(nb))
        nb++;
    return(nb);
}

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