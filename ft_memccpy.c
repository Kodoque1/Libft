#include "libft.h"
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;

    i = 0;
    while((((char *) src)[i] != c) && (i < n))
    {
        ((char*) dest)[i] = ((char*) src)[i];
        i++;
    }
    if(i == n)
        return (NULL);
    else
    {
        ((char*) dest)[i] = c;
        return (dest);
    }     
}