/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:07:03 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/23 17:50:45 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

int			ft_word_counter(char *str)
{
	int		word;

	word = 0;
	if (!str)
		return (0);
	while (*str != 0)
	{
		if (ft_is_whitespace(*str) == L_FALSE)
		{
			word += 1;
			while (*str && ft_is_whitespace(*str) == L_FALSE)
				str += 1;
		}
		else if (ft_is_whitespace(*str) == L_TRUE)
		{
			while (*str != 0 && ft_is_whitespace(*str) == L_TRUE)
				str += 1;
		}
	}
	return (word);
}

int			ft_letter_counter(char *str)
{
	int		letter;

	letter = 0;
	while (*str && ft_is_whitespace(*str) == L_FALSE)
	{
		letter += 1;
		str += 1;
	}
	return (letter);
}

void		ft_sub_array_alloc(char **array, char *str)
{
	int		letter;
	int		i;
	int		j;

	letter = 0;
	j = 0;
	while (*str)
	{
		while (*str && ft_is_whitespace(*str) == L_TRUE)
			str += 1;
		if (*str && ft_is_whitespace(*str) == L_FALSE)
		{
			letter = ft_letter_counter(str);
			if (letter && !(array[j] =
			(char *)malloc(sizeof(char) * (letter + 1))))
				return ;
			i = -1;
			while (++i < letter)
				array[j][i] = str[i];
			array[j][i] = 0;
			str += letter;
			j += 1;
		}
	}
}

char		**ft_split_whitespace(char *str)
{
	char	**array;
	int		word;

	array = NULL;
	word = ft_word_counter(str);
	if (word == 0)
		return (NULL);
	if (word && !(array = ft_array_alloc(word + 1)))
		return (NULL);
	array[word] = NULL;
	ft_sub_array_alloc(array, str);
	return (array);
}
