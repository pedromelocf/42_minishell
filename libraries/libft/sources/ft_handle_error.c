/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:17:01 by jovicto2          #+#    #+#             */
/*   Updated: 2023/11/06 17:18:09 by jovicto2         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_handle_error(const char *message)
{
	if (errno)
		perror(message);
	else
		write(STDERR_FILENO, message, ft_strlen(message));
	exit(EXIT_FAILURE);
}
