/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:38:32 by pmelo-ca          #+#    #+#             */
/*   Updated: 2024/09/19 16:39:24 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putnbr_hex(unsigned long int nbr, int index, char *base)
{
	unsigned int	reminder;
	int				length;
	char			*hexnumber;

	length = 0;
	hexnumber = malloc(sizeof(char) * 32);
	while (nbr > 0)
	{
		reminder = nbr % 16;
		hexnumber[index++] = base[reminder];
		nbr /= 16;
	}
	hexnumber[index] = '\0';
	while (index > 0)
		length += ft_putchar(hexnumber[--index]);
	hexnumber[index] = '\0';
	free(hexnumber);
	return (length);
}

int	ft_putnbr_base(unsigned long int nbr, char *base)
{
	char			*hexnumber;
	int				index;
	unsigned int	reminder;
	int				base_len;

	base_len = ft_strlen(base);
	index = 0;
	if (nbr == 0)
		return (ft_putchar('0'));
	hexnumber = malloc(sizeof(char) * 32);
	while (nbr > 0)
	{
		reminder = nbr % base_len;
		hexnumber[index++] = base[reminder];
		nbr /= base_len;
	}
	hexnumber[index] = '\0';
	while (index > 0)
		ft_putchar(hexnumber[--index]);
	base_len = ft_strlen(hexnumber);
	free(hexnumber);
	return (base_len);
}

int	ft_putstr(char *str)
{
	int	length;

	length = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[length])
	{
		ft_putchar(str[length]);
		length++;
	}
	return (length);
}

int	ft_putchr_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_ptstr_fd(char *s, int fd)
{
	write(fd, &*s, ft_strlen(s));
	return (ft_strlen(s));
}
