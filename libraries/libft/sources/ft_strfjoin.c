/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovicto2 <jovicto2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 22:37:00 by jovicto2          #+#    #+#             */
/*   Updated: 2023/05/20 22:41:08 by jovicto2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strfjoin(char *first, char *second)
{
	char	*string;
	size_t	length;

	length = ft_strlen(first);
	string = malloc(length + ft_strlen(second) + 1);
	if (string && first && second)
	{
		ft_strlcpy(string, first, length + 1);
		while (*second)
			string[length++] = *second++;
		string[length] = '\0';
	}
	free(first);
	free(second);
	return (string);
}
