#include "libft.h"

int ft_strnlen(const char *str, size_t n)
{
    size_t i;

    i = 0;
    while (str[i] != '\0' && (i < n))
        i++;
    return i;
}