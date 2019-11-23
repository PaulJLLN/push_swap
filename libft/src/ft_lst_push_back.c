/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 18:24:57 by pauljull          #+#    #+#             */
/*   Updated: 2019/11/18 09:34:28 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		ft_lst_push_back(t_list **begin_lst,
char *content, size_t content_size)
{
	t_list	*node;
	t_list	*head;
	t_list	*buff;

	node = NULL;
	if (!begin_lst)
		return ;
	buff = *begin_lst;
	head = *begin_lst;
	if (!(node = ft_lstnew(content, content_size)))
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
