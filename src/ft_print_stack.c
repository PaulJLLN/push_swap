/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:30:51 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/31 01:13:03 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stack(t_stack *a, t_stack *b)
{
	int	max;
	int i;

	i = 0;
	max = (a->n_elem > b->n_elem ? a->n_elem : b->n_elem);
	while (i < max)
	{
		if (a->stack[i] == NULL_VALUE)
			ft_putstr("NULL_VALUE  ");
		else
		{
			ft_putnbr(a->stack[i]);
			ft_print_char(' ', 12 - ft_digit(a->stack[i]));
		}
		ft_putstr("| ");
		if (b->stack[i] == NULL_VALUE)
			ft_putstr("NULL_VALUE");
		else
			ft_putnbr(b->stack[i]);
		ft_putchar('\n');
		i += 1;
	}
	ft_putstr("\n##########################################################\n\n");
}
