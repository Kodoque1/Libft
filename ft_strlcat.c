#include "libft.h"

int ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t i;
    size_t len;

    len = ft_strnlen(dest, n);
    i = 0;
    if (len != n)
    {
        while(src[i] && (i < (n - len - 1)))
        {
            dest[len + i] =  src[i];
            i++;
        }
        while(i < n)
        {
            dest[len + i] = '\0';
            i++;
        }
    }
    return (len + i);
}