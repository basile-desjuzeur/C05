int ft_recursive_factorial(int nb)
{
    int result;
    int i;

    result = 1;
    i = 1;

    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);

    result = nb * ft_recursive_factorial(nb -1);
    return (result);
}