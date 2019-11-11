/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lpb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:03:31 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/26 14:41:36 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_lpb(t_list **begin_lst, char *str)
{
	t_list	*node;
	t_list	*head;
	t_list	*buff;

	node = NULL;
	if (!begin_lst)
		return ;
	buff = *begin_lst;
	head = *begin_lst;
	if (!(node = ft_lstnew(str)))
		return ;
	if (!buff)
		*begin_lst = node;
	else
	{
		while (buff->next)
			buff = buff->next;
		buff->next = node;
	}
	if (head)
		*begin_lst = head;
}