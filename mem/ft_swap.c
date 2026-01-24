/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:06:15 by zaddi             #+#    #+#             */
/*   Updated: 2026/01/24 16:11:30 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *left, void *right, size_t siz)
{
	char	*buf;

	buf = malloc(siz * sizeof(char));
	ft_memcpy(buf, left, siz);
	ft_memcpy(left, right, siz);
	ft_memcpy(right, buf, siz);
	free(buf);
}
