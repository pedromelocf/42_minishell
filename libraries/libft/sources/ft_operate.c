/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:00:40 by jovicto2          #+#    #+#             */
/*   Updated: 2023/12/11 11:00:41 by jovicto2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_operate(int nbr1, int nbr2, char operator)
{
	if (operator == MIN)
	{
		if (nbr1 <= nbr2)
			return (nbr1);
		return (nbr2);
	}
	if (nbr1 >= nbr2)
		return (nbr1);
	return (nbr2);
}
