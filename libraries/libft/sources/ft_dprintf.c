/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:59:11 by pmelo-ca          #+#    #+#             */
/*   Updated: 2024/09/19 16:39:56 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_check_conversion_fd(const char *str, int i, va_list args,
				int fd);
static int	ft_put_voidpointer(char *str);

int	ft_dprintf(int fd, const char *str, ...)
{
	short int	i;
	int			length;
	va_list		args;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length += ft_check_conversion_fd(str, i, args, fd);
		}
		else
			length += ft_putchr_fd(str[i], fd);
		i++;
	}
	va_end(args);
	return (length);
}

static int	ft_check_conversion_fd(const char *str, int i, va_list args, int fd)
{
	int	length;

	length = 0;
	if (str[i] == 'c')
		length += ft_putchar(va_arg(args, int));
	if (str[i] == 's')
		length += ft_ptstr_fd(va_arg(args, char *), fd);
	if (str[i] == 'p')
		length += ft_put_voidpointer(va_arg(args, char *));
	if (str[i] == 'd' || str[i] == 'i')
		length += ft_putnbr(va_arg(args, int));
	if (str[i] == 'u')
		length += ft_put_unsigned(va_arg(args, int));
	if (str[i] == 'x' || str[i] == 'X')
		length += ft_put_hex(va_arg(args, unsigned int), str, i);
	if (str[i] == '%')
		length += ft_putchar('%');
	return (length);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_put_voidpointer(char *str)
{
	int	length;

	length = 0;
	if (!str)
		return (ft_putstr("(nil)"));
	length += ft_putstr("0x");
	length += ft_putnbr_base((unsigned long int)str, "0123456789abcdef");
	return (length);
}

int	ft_putnbr_recursive(int nb, int *length)
{
	if (nb < 0)
	{
		*length += ft_putchar('-');
		if (nb == -2147483648)
		{
			*length += ft_putchar('2');
			nb += 2000000000;
		}
		nb *= -1;
	}
	if (nb < 10)
		*length += ft_putchar(nb + '0');
	else
	{
		ft_putnbr_recursive(nb / 10, length);
		ft_putnbr_recursive(nb % 10, length);
	}
	return (*length);
}
