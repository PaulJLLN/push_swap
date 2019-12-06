/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:30:51 by pauljull          #+#    #+#             */
/*   Updated: 2019/12/06 20:48:46 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>
void	ft_print_stack(t_stack *a, t_stack *b)
{
	int	max;
	int i;

	i = 0;
//	max = (a->n_elem > b->n_elem ? a->n_elem : b->n_elem);
	max = a->n_elem + b->n_elem;
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
	ft_putstr("\n###################################################\n\n");
}
