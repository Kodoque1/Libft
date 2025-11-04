#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char buf[n];

    ft_memcpy(buf, src, n);
    i = 0;
    while(i < n)
    {
        ((char*) dest)[i] = ((char*) buf)[i];
        i++;
    }
    return (dest);
}