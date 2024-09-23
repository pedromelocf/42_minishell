/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 01:59:26 by jovicto2          #+#    #+#             */
/*   Updated: 2024/09/17 16:59:45 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word_length;
	int		index;

	array = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !array)
		return (0);
	index = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_length = ft_strlen(s);
			else
				word_length = ft_strchr(s, c) - s;
			array[index++] = ft_substr(s, 0, word_length);
			s += word_length;
		}
	}
	array[index] = NULL;
	return (array);
}
