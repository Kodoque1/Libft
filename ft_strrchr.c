#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *tmp;

    tmp = (char *) s;
    while(*tmp)
        tmp++;
    while(tmp != s)
    {
        if(*tmp == (char) c)
            return (tmp);
        tmp--;
    }
    return (NULL);
}