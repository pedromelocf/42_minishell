/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 04:30:06 by jovicto2          #+#    #+#             */
/*   Updated: 2023/10/29 04:31:11 by jovicto2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_arr_len(char **array)
{
	size_t	count;

	count = 0;
	while (*(array++))
		count++;
	return (count);
}
