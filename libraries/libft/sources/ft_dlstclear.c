/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:15:52 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/27 15:21:52 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_dlstclear(t_dlist **lst, void (*del)(void *), void (*d_c)(void *))
{
	t_dlist	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		if (d_c)
			d_c((*lst)->content);
		del(*lst);
		*lst = tmp;
	}
}
