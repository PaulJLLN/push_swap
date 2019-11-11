/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 08:43:08 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/02 10:33:50 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

static unsigned int	ft_word(char const *s, char c)
{
	unsigned int	index;
	unsigned int	word;

	index = 0;
	word = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c && s[index] != '\0')
			index += 1;
		if (s[index] != c && s[index] != '\0')
		{
			word += 1;
			while (s[index] != c && s[index] != '\0')
				index += 1;
		}
	}
	return (word);
}

static char			**ft_letter(char **str_split, char const *s,
	char c, unsigned int word)
{
	unsigned int	letter;
	unsigned int	index;
	unsigned int	word_count;

	letter = 0;
	index = 0;
	word_count = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c && s[index] != '\0')
			index += 1;
		while (s[index] != c && s[index] != '\0')
		{
			letter += 1;
			index += 1;
		}
		if (word_count < word)
		{
			if (!(str_split[word_count++] = (char*)malloc(sizeof(char)
			* (letter + 1))))
				return (NULL);
		}
	}
	return (str_split);
}

static void			ft_filling(char **str_split, char const *s,
	char c, unsigned int word)
{
	unsigned int	index;
	unsigned int	index_s;
	unsigned int	word_count;

	index = 0;
	index_s = 0;
	word_count = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c && s[index] != '\0')
			index += 1;
		while (s[index] != c && s[index] != '\0')
		{
			str_split[word_count][index_s] = s[index];
			index += 1;
			index_s += 1;
		}
		if (word_count < word)
		{
			str_split[word_count][index_s] = 0;
			word_count += 1;
			index_s = 0;
		}
	}
}

char				**ft_strsplit(char const *s, char c)
{
	char			**str_split;
	unsigned int	word;

	if (s == NULL)
		return (NULL);
	word = ft_word(s, c);
	if (!(str_split = (char**)malloc(sizeof(char*) * (word + 1))))
		return (NULL);
	ft_letter(str_split, s, c, word);
	ft_filling(str_split, s, c, word);
	str_split[word] = 0;
	return (str_split);
}
