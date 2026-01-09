/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:16:32 by zaddi             #+#    #+#             */
/*   Updated: 2026/01/08 16:50:39 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	insert(t_list **lst, t_list *new, int (*cmp)(void *, void *))
{
	while (*lst && cmp(new->content, lst))
		lst = &((*lst)->next);
	ft_lstadd_front(lst, new);
}

t_list	*ft_lstsort(t_list **lst, int (*cmp)(void *, void *))
{
	t_list	*result;
	t_list	*node;
	t_list	*ptr;

	ptr = *lst;
	while (lst)
	{
		node = ptr;
		ptr = ptr->next;
		node->next = NULL;
		insert(result, node, cmp);
	}
	*lst = result;
}
