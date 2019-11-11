/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 08:57:03 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/11 15:29:17 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void		ft_lst_free(t_list **head)
{
	t_list	*tmp;
	t_list	*free_node;

	tmp = *head;
	while (tmp != NULL)
	{
		ft_strdel(&tmp->content);
		free_node = tmp;
		tmp = tmp->next;
		free_node->next = NULL;
		free(free_node);
	}
}

void		ft_init_stack(t_stack *stack, char c)
{
	stack->stack = NULL;
	stack->n_elem = 0;
	stack->no = c;
}

static void		ft_free_all(t_stack *a, t_list **array_ref, char **tmp_ref)
{
	ft_n_tab_del(a->stack, a->n_elem);
	a->n_elem = 0;
	a->no = 0;
	ft_lst_free(array_ref);
	array_ref = NULL;
	ft_del_array(tmp_ref);
	tmp_ref = NULL;
}

static int			ft_error()
{
	ft_putendl_fd("Error", 2);
	return (0);
}

int			main(int ac, char **av)
{
	t_list	*list;
	char	**tmp;
	t_stack	a;

	ft_init_stack(&a, 'A');
	if (!(tmp = ft_argument_recovering(av + 1, ac - 1)))
		return (ft_error());
	a.n_elem = ft_array_len(tmp);
	if (!(a.stack = ft_argument_conversion(tmp)))
	{
		ft_del_array(tmp);
		return (ft_error());
	}
	if (!(list = ft_instruction_recovering(0)))
	{
		ft_del_array(tmp);
		ft_n_tab_del(a.stack, a.n_elem);
		return (ft_error());
	}
	ft_apply_instruction(&a, list);
	if (ft_sorted_list_checking(a.stack, a.n_elem) == FALSE)
		ft_putendl("KO");
	else
		ft_putendl("OK");
	ft_free_all(&a, &list, tmp);
	return (0);
}
