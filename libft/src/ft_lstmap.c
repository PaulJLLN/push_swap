/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 22:10:40 by cghanime          #+#    #+#             */
/*   Updated: 2019/12/07 22:11:04 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*new;
	t_list	*buff;

	buff = NULL;
	new = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		buff = f(lst);
		ft_lst_push_back(&new, buff->content, buff->content_size);
		free(buff);
		lst = lst->next;
	}
	return (new);
}
