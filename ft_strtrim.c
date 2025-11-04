#include "libft.h"

int l_isspace(int c)
{
    return (c == ' ') || (c == '\n') || (c == '\t');
}

char *ft_strtrim(char const *s)
{
    int i;
    int j;

    i = 0;
    while(l_isspace(s[i]))
        i++;
    j = i;
    while(s[j])
        j++;
    j--;
    while(l_isspace(s[j]))
        j--;
    return (ft_strsub(s, i, j - i + 1));
}