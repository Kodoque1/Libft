#include "libft.h"

void rec_putnbr(long n)
{
    char c;

    if (n < 10)
    {
        c = n + '0';
        write(1, &c, 1);
    } else {
        rec_putnbr(n / 10);
        c = n % 10 + '0';
        write(1, &c, 1);
    }
}

void ft_putnbr(int n)
{
    long l;

    l = n;
    if(l < 0)
    {
        write(1, "-", 1);
        rec_putnbr(-l);
    } else {
        rec_putnbr(l);
    }
}