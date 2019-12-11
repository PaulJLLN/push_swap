/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:10:12 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:11:03 by cghanime         ###   ########.fr       */
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
