#include "libft.h"

char * ft_strnew(size_t size)
{
    char*   buffer = (char*) malloc(size+1);
    if (!buffer)
        return NULL;
    ft_bzero(buffer, size + 1);
    return buffer;
}