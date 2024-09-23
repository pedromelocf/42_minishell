/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_for_each.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 04:32:32 by jovicto2          #+#    #+#             */
/*   Updated: 2023/10/29 04:34:29 by jovicto2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_arr_for_each(void **array, void (*array_f)(void *),
	void (*index_f)(void *))
{
	while (*array)
	{
		ft_for_each(*array, index_f);
		array_f(*(array++));
	}
}
