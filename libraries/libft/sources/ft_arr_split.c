/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 04:35:23 by jovicto2          #+#    #+#             */
/*   Updated: 2023/10/29 04:42:39 by jovicto2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	***ft_arr_split(char **array, char delimiter)
{
	char	***split_array;
	size_t	length;

	length = ft_arr_len(array);
	split_array = ft_calloc(length + 1, sizeof(char **));
	split_array[length] = NULL;
	while (length--)
		split_array[length] = ft_split(array[length], delimiter);
	return (split_array);
}
