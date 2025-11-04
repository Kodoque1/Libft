#include "libft.h"

char* ft_strjoin(char const *s1, char const* s2)
{
    char *buf;
    buf = (char *) malloc((ft_strlen(s1) + ft_strlen(s1) +1 ) * sizeof(char));
    ft_strcpy(buf, s1);
    ft_strcat(buf, s2);
    return (buf);
}