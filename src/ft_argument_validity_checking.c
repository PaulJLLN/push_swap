/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_validity_checking.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:31:16 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/23 19:04:35 by pauljull         ###   ########.fr       */
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

static long		ft_int_validity(char **s, int offset, int sign)
{
	char		*s_ref;
	char		*str;

	str = *s + offset;
	if (sign == -1)
		s_ref = "2147483648";
	else
		s_ref = "2147483647";
	if (ft_number_len_str(str) < ft_strlen(s_ref))
	{
		*s = str + ft_number_len_str(str);
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
	*s = str + 1;
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
	int			sign;

	idx = 0;
	sign = 1;
	while (str[idx] != '\0')
	{
		if (str[idx] == '+')
			idx += 1;
		else if (str[idx] == '-')
			sign = -1;
		idx += 1;
		while (str[idx] == '0')
			idx += 1;
		if (ft_int_validity(&str, idx, sign) == ERROR_PARSE_LONG)
			return (ERROR_PARSE_LONG);
		if (str[0] != 0 && ft_is_whitespace(str[0] == FALSE))
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
