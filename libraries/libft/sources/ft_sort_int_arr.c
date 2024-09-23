/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:00:40 by jovicto2          #+#    #+#             */
/*   Updated: 2023/12/11 11:00:41 by jovicto2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_sort_int_arr(int *arr, size_t size)
{
	size_t	first_index;
	size_t	second_index;

	first_index = 0;
	while (first_index < size)
	{
		second_index = first_index + 1;
		while (second_index < size)
		{
			if (arr[first_index] > arr[second_index])
				ft_swap((arr + first_index), (arr + second_index));
			second_index++;
		}
		first_index++;
	}
}
