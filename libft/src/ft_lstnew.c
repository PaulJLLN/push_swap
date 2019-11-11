/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:36:39 by pauljull          #+#    #+#             */
/*   Updated: 2019/10/26 17:41:03 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(char *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
		node->content = NULL;
	else
	{
		if (!(node->content = ft_memalloc(content_size)))
			return (NULL);
		node->content = ft_strcpy(node->content, content);
	}
	node->next = NULL;
	return (node);
}