#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if(*little == '\0')
        return (char*) big;
    i = 0;
    j = 0;
    while(big[i] != '\0' && i <= len){
        if(big[i] == little[j])
        {
          j++;
          if(little[j] == '\0')
                return (char*) (big + i - j + 1);
        } else {
            j = 0;
            if(big[i] == little[j])
                j++;
        }
        i++;
    }
    return NULL;
}