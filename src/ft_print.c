/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 12:27:02 by pauljull          #+#    #+#             */
/*   Updated: 2019/12/07 16:25:32 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			ft_error(void)
{
	ft_putendl_fd("Error", 2);
	return (0);
}

static int	ft_is_empty(t_stack stack)
{
	size_t	idx;
	size_t	len;

	len = stack.n_elem;
	idx = 0;
	while (idx < len)
	{
		if (stack.stack[idx] != NULL_VALUE)
			return (FALSE);
		idx += 1;
	}
	return (TRUE);
}

void		ft_print_result(t_stack a, t_stack b)
{
	int		ret;

	ret = ft_sorted_list_checking(a.stack, a.n_elem);
	if (ret == FALSE || (ret == TRUE && ft_is_empty(b) == FALSE))
		ft_putendl("KO");
	else
		ft_putendl("OK");
	ft_n_tab_del(b.stack, b.n_elem);
}
