#include "libft.h"

void *ft_memalloc(size_t size)
{
    void*   buffer = malloc(size);
    if (!buffer)
        return NULL;
    ft_bzero(buffer, size);
    return buffer;
}