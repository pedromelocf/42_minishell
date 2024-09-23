/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:15:52 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/27 15:21:52 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*new;

	new = malloc(sizeof(t_dlist));
	if (!new)
		return (NULL);
	*new = (t_dlist){content, NULL, NULL};
	return (new);
}
