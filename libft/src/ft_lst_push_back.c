/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:10:20 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:11:03 by cghanime         ###   ########.fr       */
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
