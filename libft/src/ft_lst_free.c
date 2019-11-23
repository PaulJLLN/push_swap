/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:50:47 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/13 11:21:34 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

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
