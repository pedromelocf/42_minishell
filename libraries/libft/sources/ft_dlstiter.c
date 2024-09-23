/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:22:50 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/27 15:27:40 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_dlstiter(t_dlist *lst, void (*f)(void *))
{
	t_dlist	*temp_node;

	temp_node = lst;
	if (!lst || !f)
		return ;
	while (temp_node)
	{
		f(temp_node->content);
		temp_node = temp_node->next;
	}
}
