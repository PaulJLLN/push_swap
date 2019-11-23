/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_recovering.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:23:00 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/23 18:27:23 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_parse_array(char *str)
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

long		ft_check_arg(char **av, size_t len)
{
	size_t	idx;
	int		arg;

	arg = 0;
	idx = 0;
	while (idx < len)
		arg += ft_parse_array(av[idx++]);
	return (arg);
}

char		**ft_argument_recovering(char **av, size_t len)
{
	size_t	idx;
	long	arg;
	char	**array;
	char	**tmp;

	arg = 0;
	if (len == 0)
		return (NULL);
	array = NULL;
	if ((arg = ft_check_arg(av, len)) == ERROR_PARSE_LONG)
		return (NULL);
	if (!(array = ft_array_alloc(arg)))
		return (NULL);
	idx = -1;
	while (arg != 0 && (++idx < len))
	{
		tmp = ft_split_whitespace(av[idx]);
		if (tmp != NULL)
		{
			ft_add_array(array, tmp, ft_array_len(tmp));
			ft_del_array(tmp);
		}
	}
	return (ft_argument_validity_checking(array));
}
