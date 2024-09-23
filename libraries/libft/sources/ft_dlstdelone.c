/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 01:27:56 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/28 01:28:31 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_dlstdelone(t_dlist *lst, void (*del)(void *))
{
	t_dlist	*temp_node;

	if (!lst || !del)
		return ;
	temp_node = lst;
	del(temp_node->content);
	free(temp_node);
}
