/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:36:08 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/27 15:39:09 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_dlstadd_b(t_dlist **lst, t_dlist *new)
{
	t_dlist	*node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = ft_dlstlast(*lst);
	node->next = new;
	new->prev = node;
}
