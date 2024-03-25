#include <unistd.h>

/*We reformulate the problem,
we need to print all the permutations of
0123456789, combinatory ensures that there is 
exactly 10! of them*/

int ft_recursive_factorial(int nb);
void ft_swap(int *a, int *b);
void ft_putchar(int c);
void generate_permutations(int *arr, int start, int end);

int ft_ten_queens_puzzle(void)
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    generate_permutations(arr, 0, 9);
    return (ft_recursive_factorial(10));
}

void generate_permutations(int *arr, int start, int end)
{
    int i;

    i = 0;
    if (start == end)
    {
        while (i < 10)
        {
            ft_putchar(arr[i] + '0');
            i++;
        }
    }
    else
    {
        while (i <= end)
        {
            ft_swap(&arr[start], &arr[i]);
            generate_permutations(arr, start + 1, end);
            ft_swap(&arr[start], &arr[i]);
            i++;
        }
    }
}

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

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_putchar(int c)
{
    write(1, &c, 1);
}