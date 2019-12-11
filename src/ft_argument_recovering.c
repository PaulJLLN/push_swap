/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_recovering.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:25:58 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/08 13:21:35 by cghanime         ###   ########.fr       */
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
		if (*str && ft_is_whitespace(*str) == L_FALSE)
		{
			arg += 1;
			while (*str && ft_is_whitespace(*str) == L_FALSE)
				str += 1;
		}
		else if (*str && ft_is_whitespace(*str) == L_TRUE)
			while (*str && ft_is_whitespace(*str) == L_TRUE)
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
		return ((char **)-1);
	array = NULL;
	if ((arg = ft_check_arg(av, len)) == L_FALSE)
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
