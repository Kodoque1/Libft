#include "libft.h"

void rec_putnbr_fd(long n, int fd)
{
    char c;

    if (n < 10)
    {
        c = n + '0';
        write(fd, &c, 1);
    } else {
        rec_putnbr_fd(n / 10, fd);
        c = n % 10 + '0';
        write(fd, &c, 1);
    }
}

void ft_putnbr_fd(int n, int fd)
{
    long l;

    l = n;
    if(l < 0)
    {
        write(fd, "-", 1);
        rec_putnbr_fd(-l, fd);
    } else {
        rec_putnbr_fd(l, fd);
    }
}