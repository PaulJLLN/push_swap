/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_instruction.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 09:31:30 by pauljull          #+#    #+#             */
/*   Updated: 2019/12/07 17:53:34 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_dispatch_instruction(char *str, t_stack *a, t_stack *b)
{
	if (ft_strcmp(str, "pa") == 0)
		ft_push(b, a, NULL);
	if (ft_strcmp(str, "pb") == 0)
		ft_push(a, b, NULL);
	if (ft_strcmp(str, "sa") == 0 || ft_strcmp(str, "ss") == 0)
		ft_swap(a, 0, 1, NULL);
	if (ft_strcmp(str, "sb") == 0 || ft_strcmp(str, "ss") == 0)
		ft_swap(b, 0, 1, NULL);
	if (ft_strcmp(str, "ra") == 0 || ft_strcmp(str, "rr") == 0)
		ft_rotate(a, UP, NULL);
	if (ft_strcmp(str, "rb") == 0 || ft_strcmp(str, "rr") == 0)
		ft_rotate(b, UP, NULL);
	if (ft_strcmp(str, "rra") == 0 || ft_strcmp(str, "rrr") == 0)
		ft_rotate(a, DOWN, NULL);
	if (ft_strcmp(str, "rrb") == 0 || ft_strcmp(str, "rrr") == 0)
		ft_rotate(b, DOWN, NULL);
}

void		ft_apply_instruction(t_stack *a, t_stack *b, t_list *list)
{
	int		i;

	i = 0;
	if (!(b->stack = (long *)malloc(sizeof(long) * a->n_elem)))
		return ;
	b->no = 'B';
	b->n_elem = 0;
	while (i < a->n_elem)
		b->stack[i++] = NULL_VALUE;
	if (list && list->content == NULL)
	{
		ft_n_tab_del(b->stack, b->n_elem);
		return ;
	}
	while (list != NULL)
	{
		ft_dispatch_instruction(list->content, a, b);
		list = list->next;
	}
}
