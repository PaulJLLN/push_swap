/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_validity_checking.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:26:03 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:27:26 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static long		ft_auth_char(char c)
{
	if (c != '+' && c != '-' && ft_is_number(c) == L_FALSE)
		return (L_FALSE);
	return (L_TRUE);
}

static char		*ft_preparsing(char **str, char **ref_s)
{
	char	*tmp;
	int		sign;

	sign = 1;
	tmp = *str;
	if (*tmp == '-')
		sign = -1;
	if (*tmp == '-' || *tmp == '+')
		tmp += 1;
	if (*tmp < '0' || *tmp > '9')
		return (NULL);
	while (*tmp == '0')
		tmp += 1;
	*ref_s = tmp;
	*str = tmp;
	if (sign == -1)
		return ("2147483648");
	return ("2147483647");
}

static t_bool	ft_pattern_recognition(char **str)
{
	char	*ref_s;
	char	*xtrem_s;

	if ((xtrem_s = ft_preparsing(str, &ref_s)) == NULL)
		return (FALSE);
	if (ft_number_len_str(ref_s) > ft_number_len_str(xtrem_s))
		return (FALSE);
	if (ft_number_len_str(ref_s) < ft_number_len_str(xtrem_s))
	{
		ft_number_move_str(str);
		return (**str == 0 ? TRUE : FALSE);
	}
	while (ft_is_number(*ref_s) == L_TRUE)
	{
		if (*(ref_s++) > *(xtrem_s++))
			return (FALSE);
	}
	if (ft_is_whitespace(*ref_s) == FALSE && *ref_s != 0)
		return (FALSE);
	*str = ref_s;
	return (TRUE);
}

static long		ft_str_validity_checking(char *str)
{
	while (*str)
	{
		while (ft_is_whitespace(*str) == L_TRUE)
			str += 1;
		if (ft_auth_char(*str) == L_FALSE)
			return (L_FALSE);
		else
		{
			if (ft_pattern_recognition(&str) == FALSE)
				return (L_FALSE);
		}
	}
	return (L_TRUE);
}

char			**ft_argument_validity_checking(char **array)
{
	size_t		idx;

	idx = 0;
	if (array == NULL)
		return (NULL);
	while (array[idx] != NULL)
	{
		if (ft_str_validity_checking(array[idx]) == L_FALSE)
		{
			ft_del_array(array);
			return (NULL);
		}
		idx += 1;
	}
	return (array);
}
