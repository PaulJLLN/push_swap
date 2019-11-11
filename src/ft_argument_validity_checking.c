/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_validity_checking.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:31:16 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/30 22:31:12 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int				ft_number_len_str(char *str)
{
	int			i;

	i = 0;
	if (str[i] == '-')
		i += 1;
	while (ft_is_number(str[i]) == VALID_PARSE_LONG)
		i += 1;
	return (i);
}

static long		ft_int_validity(char **s, int offset)
{
	char		*s_ref;
	char		*str;

	str = *s + offset;
	if (str[0] == '-')
		s_ref = "-2147483648";
	else
		s_ref = "2147483647";
	if (ft_number_len_str(str) < ft_strlen(s_ref))
	{
		*s = str + ft_number_len_str(str) - 1;
		return (VALID_PARSE_LONG);
	}
	while (*str)
	{
		if (*str > *s_ref)
			return (ERROR_PARSE_LONG);
		else if (*str < *s_ref)
			return (VALID_PARSE_LONG);
		str += 1;
		s_ref += 1;
	}
	*s = str;
	return (VALID_PARSE_LONG);
}

static long		ft_auth_char(char c)
{
	if (c != '+' && c != '-' && ft_is_number(c) == ERROR_PARSE_LONG)
		return (ERROR_PARSE_LONG);
	return (VALID_PARSE_LONG);
}

static long		ft_str_validity_checking(char *str)
{
	size_t		idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (ft_auth_char(str[idx]) == ERROR_PARSE_LONG)
			return (ERROR_PARSE_LONG);
		if ((str[idx] == '+' || str[idx] == '-') &&
		ft_is_number(str[idx + 1]) == ERROR_PARSE_LONG)
			return (ERROR_PARSE_LONG);
		if (str[idx] == '+')
			idx += 1;
		if (ft_int_validity(&str, idx) == ERROR_PARSE_LONG)
			return (ERROR_PARSE_LONG);
		idx += 1;
	}
	if (idx == 0)
		return (ERROR_PARSE_LONG);
	return (VALID_PARSE_LONG);
}

char			**ft_argument_validity_checking(char **array)
{
	size_t		idx;

	idx = 0;
	if (array == NULL)
		return (NULL);
	while (array[idx] != NULL)
	{
		if (ft_str_validity_checking(array[idx]) == ERROR_PARSE_LONG)
			return (NULL);
		idx += 1;
	}
	return (array);
}
