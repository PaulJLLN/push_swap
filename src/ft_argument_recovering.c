/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_recovering.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:23:00 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/11 10:37:53 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int			ft_parse_array(char *str)
{
	int		arg;

	arg = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str && ft_is_whitespace(*str) == ERROR_PARSE_LONG)
		{
			arg += 1;
			while (*str && ft_is_whitespace(*str) == ERROR_PARSE_LONG)
				str += 1;
		}
		else if (*str && ft_is_whitespace(*str) == VALID_PARSE_LONG)
			while (*str && ft_is_whitespace(*str) == VALID_PARSE_LONG)
				str += 1;
	}
	return (arg);
}

char		**ft_argument_recovering(char **av, size_t len)
{
	size_t	idx;
	size_t	arg;
	char	**array;
	char	**tmp;

	idx = 0;
	array = NULL;
	arg = 0;
	if (len == 0)
		return (array);
	while (idx < len)
	{
		if (ft_strcmp(av[idx], "") == 0)
			return (NULL);
		arg += ft_parse_array(av[idx++]);
	}
	if (!(array = ft_array_alloc(arg)))
		return (NULL);
	idx = -1;
	while (arg != 0 && (++idx < len))
	{
		tmp = ft_split_whitespace(av[idx]);
		ft_add_array(array, tmp, ft_array_len(tmp));
		ft_del_array(tmp);
	}
	return (ft_argument_validity_checking(array));
}
