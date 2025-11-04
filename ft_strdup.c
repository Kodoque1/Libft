#include "libft.h"

char* ft_strdup(const char *s)
{
    char *str;

    str = (char *) malloc((ft_strlen(s) +1) * sizeof(char));
    if(!str)
        return NULL;
    ft_strcpy(str, s);
    return (str);
}