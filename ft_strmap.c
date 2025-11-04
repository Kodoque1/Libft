#include "libft.h"

char* ft_strmap(char const *s, char (*f)(char))
{
    char* buf;
    int i;

    buf = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!buf)
        return NULL;
    i = 0;   
    while(s[i])
    {
        buf[i] = f(s[i]);
        i++;
    }
    buf[i] = '\0';
    return (buf);
}