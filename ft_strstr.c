#include <string.h>

char *ft_strstr(const char *big, const char *little)
{
    int i;
    int j;

    if(*little == '\0')
        return (char*) big;
    i = 0;
    j = 0;
    while(big[i] != '\0'){
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