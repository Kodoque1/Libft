#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t size)
{
    if(ft_strnlen(s1, size) == ft_strnlen(s2, size))
    {
        if(ft_strncmp(s1, s2, size) == 0)
            return (1);
        else
            return (0);
    }
    return (0);
}