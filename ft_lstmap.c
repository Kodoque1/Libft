#include "libft.h"

t_list* ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *new;
    t_list *result;
    t_list *pointer;

    result = NULL;
    while(lst)
    {
        new = f(lst);
        if(new == NULL)
            return NULL;
        if(result)
        {
            pointer->next = new;
            pointer = new;
        }
        else
        {
            result = new;
            pointer = result;
        }
        lst = lst->next;
    }
    return (result);
}