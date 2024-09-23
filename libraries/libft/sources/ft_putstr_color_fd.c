/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:01:40 by jovicto2          #+#    #+#             */
/*   Updated: 2023/11/13 23:01:43 by jovicto2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_color_fd(char *color, char *s, int fd)
{
	ft_putstr_fd(color, fd);
	ft_putstr_fd(s, fd);
	ft_putstr_fd(ANSI_COLOR_RESET, fd);
}
