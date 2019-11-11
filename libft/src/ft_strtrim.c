/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:25:45 by pauljull          #+#    #+#             */
/*   Updated: 2019/09/02 10:33:50 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static unsigned int		ft_is_over(char const *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] != ' ' && str[index] != '\n' && str[index] != '\t')
			return (1);
		index += 1;
	}
	return (0);
}

static unsigned int		real_length(char const *str)
{
	unsigned int	index;

	index = 0;
	while (((str[index] != ' ' && str[index] != '\n' && str[index] != '\t') ||
	((str[index] == ' ' || str[index] == '\n' || str[index] == '\t') &&
	(ft_is_over(str + index + 1)))) && str[index] != '\0')
		index += 1;
	return (index);
}

char					*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	count;
	unsigned int	r_len;

	count = 0;
	if (!s)
		return (NULL);
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s != '\0')
		s += 1;
	r_len = real_length(s);
	if (!(str = ft_strnew(r_len)))
		return (NULL);
	while (count < r_len)
	{
		str[count] = *(s + count);
		count += 1;
	}
	return (str);
}
