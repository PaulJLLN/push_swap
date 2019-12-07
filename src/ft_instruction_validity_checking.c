/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_validity_checking.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 10:53:20 by pauljull          #+#    #+#             */
/*   Updated: 2019/12/07 17:15:43 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static char	**ft_instruction_set_gen(void)
{
	char	**array;

	if (!(array = (char **)malloc(sizeof(char *) * 12)))
		return (NULL);
	array[0] = ft_strdup("pa");
	array[1] = ft_strdup("pb");
	array[2] = ft_strdup("sa");
	array[3] = ft_strdup("sb");
	array[4] = ft_strdup("ss");
	array[5] = ft_strdup("ra");
	array[6] = ft_strdup("rb");
	array[7] = ft_strdup("rr");
	array[8] = ft_strdup("rra");
	array[9] = ft_strdup("rrb");
	array[10] = ft_strdup("rrr");
	array[11] = NULL;
	return (array);
}

long		ft_instruction_validity_checking(t_list *list)
{
	char	**instruction_set;

	instruction_set = ft_instruction_set_gen();
	while (list != NULL)
	{
		if (ft_array_elem_cmp(list->content, instruction_set)
		== L_FALSE)
		{
			ft_del_array(instruction_set);
			ft_lst_free(&list);
			return (L_FALSE);
		}
		list = list->next;
	}
	ft_del_array(instruction_set);
	return (L_TRUE);
}
