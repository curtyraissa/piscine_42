/*Assignment name  : ft_putnbr
Expected files   : ft_putnbr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays an integer number on the standard output.

Your function must be declared as follows:

void ft_putnbr(int nb);
*/

#include <unistd.h>

void ft_putnbr(int nb)
{
    long num;
    char c;

    num = nb;
    if (num < 0)
    {
        write(1, "-", 1);
        num = -num;
    }
    if (num > 9)
    {
        ft_putnbr(num / 10);
    }
    c = (num % 10) + '0';
    write(1, &c, 1);
}
