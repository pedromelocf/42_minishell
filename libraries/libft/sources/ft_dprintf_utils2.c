/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:38:30 by pmelo-ca          #+#    #+#             */
/*   Updated: 2024/09/19 16:38:31 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putnbr(int nb)
{
	int	length;

	length = 0;
	ft_putnbr_recursive(nb, &length);
	return (length);
}

int	ft_put_unsigned(long int nb)
{
	int	length;

	length = 0;
	if (nb < 0)
		nb = 4294967295 + nb + 1;
	if (nb < 10)
		length += ft_putchar(nb + '0');
	else
	{
		length += ft_putnbr(nb / 10);
		length += ft_putnbr(nb % 10);
	}
	return (length);
}

int	ft_put_hex(unsigned long int nbr, const char *str, int i)
{
	int	index;
	int	length;

	length = 0;
	index = 0;
	if (nbr == 0)
		return (ft_putchar('0'));
	if (str[i] == 'x')
		length += ft_putnbr_hex(nbr, index, "0123456789abcdef");
	if (str[i] == 'X')
		length += ft_putnbr_hex(nbr, index, "0123456789ABCDEF");
	return (length);
}
